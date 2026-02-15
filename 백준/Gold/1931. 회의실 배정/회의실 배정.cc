#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<pair<int, int>> a;
	a.reserve(n);
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		a.emplace_back(x,y);
	}

	sort(a.begin(), a.end(), [] (const pair<int, int>& a, const pair<int, int>& b) {
		if (a.second == b.second) return a.first < b.first;
		else return a.second < b.second;
		});

	int count = 0;
	int y = -1;
	for (auto& k : a) {
		if (k.first >= y) {
			y = k.second;
			count++;
		}
	}
	cout << count << '\n';
}