#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> v;
priority_queue<int, vector<int>, greater<int>> pq;

int n, d, c;
long long ret;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for (int i=0; i < n; i++) {
		cin >> d >> c;
		v.push_back({d, c});
	}
	sort(v.begin(), v.end());
	for(int i=0; i< n; i++) {
		pq.push(v[i].second);
		if(pq.size()>v[i].first) pq.pop();
	}
	while(pq.size()) {
		ret += pq.top();
		pq.pop();
	}
	cout << ret << '\n';
} 