#include<bits/stdc++.h>

using namespace std;

int n, m, temp, root;
vector<int> adj[50];

int dfs(int here){
    int ret = 0; 
    int child = 0;
    for(int there : adj[here]) {
	if(there == m)
        continue;
	ret += dfs(there);
	child++; 
    }
    if(child == 0) 
	return 1;
	return ret;
}
int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		if(temp == -1) 
		root = i;
        else adj[temp].push_back(i);
	}
	cin >> m;
    if(m == root){
        cout << 0 << "\n";
		return 0;
    }
    
    cout << dfs(root) << "\n";
    return 0;
}
