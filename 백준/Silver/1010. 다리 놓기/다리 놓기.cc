#include <iostream>

using namespace std;

long long com(int n, int r) { // nCr
	if (n == 0) return 0;
	long long ret =1;
	if (r > n/2) {
		for(int i=n; i>r; i--) { // n!/r!
			ret *= i;
		}
		for(int i=1; i<=n-r; i++) ret /= i; // (n-r)!으로 나누기 
	}
	else {
		for(int i=n; i>n-r; i--) { // n!/(n-r)!
			ret *= i;
		}
		for(int i=1; i<=r; i++) ret /= i; // r!으로 나누기 
	}
	return ret;
}
int t, n, m;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> t;
	while(t--) {
		cin >> n >> m;
		if (n == m) cout << 1 << '\n';
		else cout << com(m,n) << '\n';
	} 
} 