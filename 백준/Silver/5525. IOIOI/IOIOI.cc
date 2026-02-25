#include <bits/stdc++.h>
// 어차피 많이 겹쳐봐야 끝 I가 다른 문자열의 첫 I가 되는 경우뿐
// N = 내가 찾는 문자열의 길이
// M = 베이스 문제열의 길이 
// S = 베이스 문자열 
// 근데 그렇게 하면 최악의 경우 MN이라서 100만*100만 out
// kmp 쓰면 되려나? 
using namespace std;

int n, m, SP[1000003];
string s, p = "I";

void computeSP(string P, int SP[], int m) {
	SP[0] = -1;
	int j = -1;
	for (int i = 1; i < m; i++) {
		while(j >= 0 && P[j+1] != P[i]) j = SP[j];
		if (P[j+1] == P[i]) j++;
		SP[i] = j;
	}
}
// SP 배열: 패턴 문자열 인덱스 0~i까지의 접두사와 접미사가 일치하는 최대 길이(글자 수 -1)의미 

int KMP(string P, string T, int n, int m) { // n은 T의 길이, m은 P의 길이
	computeSP(P, SP, m);
	int cnt = 0;
	int j = -1; // j는 pattern 순회 
	for (int i = 0; i < n; i++) { // text string 순회
		while(j >= 0 && P[j+1] != T[i]) j = SP[j];
		if (P[j+1] == T[i]) j++;
		if (j == m-1) {
			cnt++;
			j = SP[j];
		}
	}
	return cnt;
}

int main() {
	cin >> n >> m >> s;
	for(int i=0; i<n; i++) p += "OI";
	
	cout << KMP(p, s, m, p.length()) << '\n';
}