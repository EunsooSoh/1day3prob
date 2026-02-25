#include <bits/stdc++.h>

using namespace std;

int n, m, k, a[101][101], b[101][101], c[101][101];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m;
	for (int i=0; i<n; i++) {
		for (int j=0; j <m; j++) {
			cin >> a[i][j];
		}
	}
	cin >> m >> k;
	for (int i=0; i<m; i++) {
		for (int j=0; j<k; j++) {
			cin >> b[i][j];
		}
	}
	for(int l =0; l <k; l++) {
		for (int i=0; i<n; i++) {
			for (int j=0; j <m; j++) {
					c[i][l] += a[i][j] * b[j][l];
			}
		}
	}
	
	for(int i=0; i<n; i++) {
		for (int j=0; j<k; j++) cout << c[i][j] << ' ';
		cout << '\n';
	}
}