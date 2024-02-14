#include <bits/stdc++.h>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> stu(n+2,0);
    
    for(int i:lost){
        stu[i]--;
    }
    for(int i:reserve){
        stu[i]++;
    }
    
    for(int i=1; i<=n; i++){
        if(stu[i]<0){
            if(stu[i-1]==1){
                stu[i]++;
                stu[i-1]--;
            }
            else if(stu[i+1]==1){
                stu[i]++;
                stu[i+1]--;
            } 
        }
    }
    
    for(int i=1; i<=n; i++){
        if(stu[i]>=0)
            answer++;
    }
    
    return answer;
}