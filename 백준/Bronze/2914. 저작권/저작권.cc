#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() 
{
	int num, avg;
	cin >> num >> avg;
	int ans = num * (avg - 1) + 1;

	cout << ans << "\n";
}