#include<bits/stdc++.h>
#include <vector>

using namespace std;

int n;
vector<pair<int, int>> v;

int main() {
	cin >> n;
	v.reserve(n);
	for (int i = 0; i < n; i++) {
	int a, b;
	cin >> a >> b;
	v.push_back({a, b});
	}
    
	sort(v.begin(), v.end());
	int time = v[0].first + v[0].second;
	for (int i = 1; i < v.size(); i++) {
		if (ans <= v[i].first) {
		time = v[i].first + v[i].second;
		} else {
		time = time + v[i].second;
		}
	}

	cout << time << '\n';
	return 0;
}
