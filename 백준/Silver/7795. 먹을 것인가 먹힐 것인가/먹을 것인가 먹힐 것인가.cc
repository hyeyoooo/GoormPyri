#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int a[20000];
int b[20000];

int main(){
  int t, n, m;
  cin >> t;
    
  while(t--){
    cin >> n >> m;
    for(int i=0; i<n; i++){
      cin >> a[i];
    }
    for(int i=0; i<m; i++){
      cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+m);
    int result = 0;
      
    for(int i=0; i<n; i++){
      int low = 0;
      int high = m-1;
      int x = a[i];
      while(low <= high){
        int mid = (low + high)/2;
        if(b[mid] >= x) high = mid-1;
        else low = mid+1;
      }
      result += low;
    }
    cout << result << '\n';
  }
  return 0;
}