#include <iostream>
#include <algorithm>
using namespace std;

int n, x, a[100004], low, high, cnt, sum;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for (int i = 0;i < n; i++) cin >> a[i];
	cin >> x;
	
	sort(a, a+n);
	high = n-1;
	while(high > low) {
		sum = a[low] + a[high];
		if (sum == x) cnt++;
		if (sum < x) low++;
		else high--;
	}
	cout << cnt << '\n';
}