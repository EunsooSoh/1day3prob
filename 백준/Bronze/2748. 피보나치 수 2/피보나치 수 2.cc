#include <iostream>
using namespace std;

int n;
long long pp, p=1;
long long fib[91];
int main() {
	cin >> n;
	fib[1] = p;
	for (int i = 2; i <= n; i++) {
		fib[i] = pp + p;
		pp = p;
		p = fib[i];
	}
	
	cout << fib[n] << '\n';
}