#include <iostream>

using namespace std;

int n;
string young, old; // 숫자가 크면 젊
int yd, ym, yy, od, om, oy;

int main() {
	cin >> n;
	string name;
	int d, m, y;
	// 초기
	cin >> name >> d >> m >> y;
	yd = od = d;
	ym = om = m;
	yy = oy = y;
	young = name;
	old = name;

	while (--n) {
		cin >> name >> d >> m >> y;
		// young 갱신
		if (y > yy) {
			young = name;
			yy = y;
			ym = m;
			yd = d;
		}
		else if (y == yy) {
			if (m > ym) {
				young = name;
				yy = y;
				ym = m;
				yd = d;
			}
			else if (m == ym) {
				if (d > yd) {
					young = name;
					yy = y;
					ym = m;
					yd = d;
				}
			}
		}
		// old 갱신
		if (y < oy) {
			old = name;
			oy = y;
			om = m;
			od = d;
		}
		else if (y == oy) {
			if (m < om) {
				old = name;
				oy = y;
				om = m;
				od = d;
			}
			else if (m == om) {
				if (d < od) {
					old = name;
					oy = y;
					om = m;
					od = d;
				}
			}
		}
	}
	cout << young << '\n' << old << '\n';
}