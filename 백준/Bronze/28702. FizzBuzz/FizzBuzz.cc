#include <bits/stdc++.h>
using namespace std;
// 문자열의 길이가 8이하 == 최대 99,999,999 최대 1억 정도
// 1억 개를 미리 다 할 수는 없음 0.5초라 안 됨 
// 어차피 다음에 오는 걸 출력하는 거라 base num 기준 뒤로 가기만 하면 됨 
string s[4];
int base_num, base_idx;
int ret; 
int main() {
	for (int i = 0; i < 3; i++) {
		cin >> s[i];
		if (s[i][0] != 'B' && s[i][0] != 'F') { // 숫자임 
			base_num = stoi(s[i]);
			base_idx = i;
		}
	}
	ret = base_num + 3-base_idx;
	if (ret % 3 == 0) {
		if (ret % 5==0) cout << "FizzBuzz\n";
		else cout << "Fizz\n";
	}
	else if (ret % 5== 0) cout << "Buzz\n";
	else cout << ret << '\n'; 
 } 