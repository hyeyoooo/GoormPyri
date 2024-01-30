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
	int ans = v[0].first + v[0].second;
	for (int i = 1; i < v.size(); i++) {
		if (ans <= v[i].first) {
		ans = v[i].first + v[i].second;
		}
		else
		{
		ans = ans + v[i].second;
		}
	}

	cout << ans << '\n';
	return 0;
}