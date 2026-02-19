#include <bits/stdc++.h> 

using namespace std;
int ret, area, n, m;
char mp[51][51];

int main() {
	scanf("%d%d", &n, &m);
	getchar(); // 개행 제거 
	for(int i=0; i<n; i++) {
		for(int j =0; j< m; j++) {
			scanf("%c", &mp[i][j]);
		}
		getchar(); // 개행 제거 
	}
	
	for (int a=0; a<n; a++) {
		for(int b=0;b<m; b++) { //(a, b)
			for(int c=n-1; c >= 0; c--) {
				for(int d=m-1; d >= 0; d--) { // (c, d)
					if (c-a != d-b) continue; // 정사각형 아님 
					if ((mp[a][b]==mp[c][d]) && (mp[c][d] == mp[c][b]) && (mp[c][b] == mp[a][d])) {
						area = (abs(c-a)+1)*(abs(d-b)+1);
						if (area > ret) {
							ret = area;
						}
					}
				}
			}
		}
	}
	printf("%d\n", ret);
}