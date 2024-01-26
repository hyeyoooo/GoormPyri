#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int n, d, k, c; // n: 접시의 수, d: 초밥의 종류, k: 연속해서 먹는 접시 수, c: 쿠폰 번호
int arr[30001]; // 초밥 벨트에 초밥 저장할 배열
bool check[30001]; // 초밥 종류별로 먹었는지 저장한 배열
int Maxsushi = 0; // 먹을 수 있는 최대 초밥의 종류 수

int main() {
    cin >> n >> d >> k >> c;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) { // 모든 접시에 대해 검사
        int flag = 0; // 같은 종류의 초밥을 먹은 횟수
        int coupon = 1; // 쿠폰 사용 여부 
        
        for(int j = i; j < i + k; j++) {  // k개의 연속된 접시를 체크
            if(!check[arr[j % n]]) check[arr[j % n]] = true; // 아직 먹지 않은 종류의 초밥을 체크
            else flag++; // 이미 먹은 종류라면 flag 증가
        }

        if(check[c]) coupon = 0; // 쿠폰으로 먹을 수 있는 초밥이 이미 종류에 있는지 확인
				int sushi = k - flag + coupon;
				Maxsushi = max(Maxsushi, sushi);

				memset(check, false, sizeof(check));
    }

    cout << Maxsushi << endl;
    return 0;
}