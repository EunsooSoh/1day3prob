// 공통되지 않으면 바로 ?치환
#include <bits/stdc++.h>

using namespace std;

int n, len;
string s[51], base;

int main() {
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> s[i];
	}
	base = s[0];
	len = base.length();
	for(int i=1; i <n; i++) {
		for(int j = 0; j < len; j++) {
			if (base[j] != '?' && base[j] != s[i][j]) base[j] = '?';
		}	
	}
	cout << base << '\n';
} 