#include <iostream>

using namespace std;
int n, s, c, a, r, cnt;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s >> c >> a >> r;
		if (s >= 1000 || c >= 1600 || a >= 1500 || ((r != -1) && (r <= 30))) cnt++;
	}
	cout << cnt << '\n';
 }