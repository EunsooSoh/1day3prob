#include <iostream>
#include <cmath>
using namespace std;

int p, m, c, mn = 1000000004, x;
int tmp;

int main() {
	cin >> p >> m >> c >> x;
	for (int i =1; i<= p; i++) {
		for (int j = 1; j <= m; j++) {
			for (int k =1; k <= c; k++) {
				tmp = abs((i+j)*(j+k)-x);
				if (tmp < mn) mn = tmp;
			}
		}
	}
	cout << mn << '\n';
}