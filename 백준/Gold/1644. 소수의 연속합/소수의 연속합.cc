#include <iostream>
#include <vector>
using namespace std;

int n, a[4000001], low, high, cnt, sum;
vector<int> pv;
void sieve(int end) {
	for (int i = 2; i <= end; i++) {
		a[i] =i;
	}
	for (int i = 2; i <= end; i++) {
		if (!a[i]) continue;
		for (int j = i+i; j <= end; j+=i) {
			a[j] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	pv.reserve(n);
	sieve(n);
	for (int i=2; i <= n; i++) {
		if (a[i]) pv.push_back(i);
	}
	while(1) {
		if (sum >= n) sum -= pv[low++];
		else if (high == pv.size()) break;
		else sum += pv[high++];
		if (sum == n) cnt++;
	}
	cout << cnt << '\n';
}