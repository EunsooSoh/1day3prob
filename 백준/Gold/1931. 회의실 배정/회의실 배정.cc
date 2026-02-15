#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> v;

int n, s, e, now, cnt;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for (int i=0; i< n; i++) {
		cin >> s >> e;
		v.push_back({e, s});
	}
	sort(v.begin(), v.end()); 
	 
	for(int i=0; i<v.size(); i++) {
		if (v[i].second >= now) {
			now = v[i].first;
			cnt++;
		}
	} 
	cout << cnt << '\n';
}