#include <iostream>

using namespace std;
// 혼자만 가진 거 개수 +  
// 공통으로 가진 거는 큰 거 - 작은 거 
int s1[26], s2[26];
string a, b;
int cnt;

int main() {
	
	cin>> a;
	for (char c : a) {
		s1[c-'a']++;
	}
	cin>> b;
	for (char c : b) {
		s2[c-'a']++;
	}
	
	for (int i=0; i<26; i++) {
		if (s1[i] == 0) cnt += s2[i];
		else if (s2[i] == 0) cnt += s1[i];
		else {
			if (s1[i]>s2[i]) cnt += s1[i]-s2[i];
			else cnt += s2[i]-s1[i];
		}
	}
	cout << cnt << '\n';
}