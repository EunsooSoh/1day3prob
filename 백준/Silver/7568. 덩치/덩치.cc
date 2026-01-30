#include <iostream>
#include <vector>
using namespace std;

int n;
vector<pair<int, int>> v;

int main() {
	v.reserve(51);

	cin >> n;
	int w, l;
	for (int i = 0; i < n; i++) {
		cin >> w >> l;
		v.push_back({ w, l });
	}

	for (int i = 0; i < n; i++) {
		int rank = 0;
		for (int j = 0; j < n; j++) {
			if (v[i].first < v[j].first && v[i].second < v[j].second) rank++;
		}
		cout << rank+1 << ' '; // 자기 자신 포함 
	}
}