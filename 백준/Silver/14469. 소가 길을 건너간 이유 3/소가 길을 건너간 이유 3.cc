#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
int n, start, done;
int main() {
	cin >> n;
	int arr, check;
	for (int i = 0 ;i < n; i++) {
		cin >> arr >> check;
		v.push_back({arr, check});
	}
	sort(v.begin(), v.end());
	for (auto& k : v) {
		if (done >= k.first) start = done;
		else start = k.first;
		done = start + k.second;
	}
	cout << done << '\n';
}