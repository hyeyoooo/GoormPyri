#include <bits/stdc++.h>
using namespace std;

vector<int> student;
stack<int> temp;

int main() {
	int N, input, out = 1, i = 0;
	cin >> N;
    
	for (int i = 0; i < N; i++) {
		cin >> input;
		student.push_back(input);
	}
	while (1) {
		if (i < N && student[i] == out) {
			i++;
			out++;
		}
		else if (!temp.empty() && temp.top() == out) {
			out++;
			temp.pop();
		}
		else if (i < N) {
			temp.push(student[i]);
			i++;
		}
		else if (out > N) {
			cout << "Nice";
			return 0;
		}
		else {
			cout << "Sad";
			return 0;
		}
	}
}