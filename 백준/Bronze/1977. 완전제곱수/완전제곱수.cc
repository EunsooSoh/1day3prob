#include <iostream>

using namespace std;

int a[10003];
long long sm;
int m, n;
int mn;

int main() {
	int sq;
	cin >> m >> n;
	for (int i = 1; i <= 100; i++) {
		sq = i * i;
		a[sq] = sq;
	}
	// 최솟값
	for (int i = m; i <= n; i++) {
		if (a[i] != 0) {
			mn = i;
			break;
		}
	}
	// 합
	for (int i = m; i <= n; i++) {
		sm += a[i];
	}
	if (sm == 0) sm = -1;
	cout << sm << '\n';
	if (sm != -1) cout << mn << '\n';
}