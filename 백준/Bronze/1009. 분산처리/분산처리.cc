#include <iostream>

using namespace std;
int a, b;
int t;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;

	while (t--) {
		cin >> a >> b;
		long long ret = 1;
		if (a == 1) {
			cout << 1 << '\n';
			continue;
		}
		for (int i = 0; i < b; i++) {
			if (ret == 0) break;
			ret *= a % 10;
			ret = ret % 10;
		}
		if (ret == 0) cout << 10 << '\n';
		else cout << ret%10 << '\n';
	}
}