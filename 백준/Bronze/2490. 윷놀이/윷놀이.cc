#include <bits/stdc++.h>

using namespace std;
int x;

int main() {
	for (int i =0; i < 3; i++) {
		int ret = 0;
		for (int j = 0; j < 4; j++) {
			cin >> x;
			if (x) ret++; // 등의 개수 
		}
		if (ret == 0) {
			cout << "D" << '\n';
		}
		else if (ret == 1) {
			cout << "C" << '\n';
		}
		else if (ret == 2) {
			cout << "B" << '\n';
		}
		else if (ret == 3) {
			cout << "A" << '\n';
		}
		else if (ret == 4) {
			cout << "E" << '\n';
		}
	}
}