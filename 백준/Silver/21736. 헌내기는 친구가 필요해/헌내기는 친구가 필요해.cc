#include <bits/stdc++.h>

using namespace std;

char mp[601][601];
int n, m, visited[601][601], cnt, sy, sx;
int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};

void dfs(int y, int x) {
	visited[y][x] =1;
	if (mp[y][x]=='P') cnt++;
	for (int i =0; i< 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx] || mp[ny][nx] == 'X') continue;
		dfs(ny, nx);
	}
}

int main() {
	cin >> n >> m;
	for (int i =0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>mp[i][j];
			if (mp[i][j] == 'I') {
				sy = i; sx = j;
			}
		}
	}
	dfs(sy, sx);
	if (cnt) cout << cnt << '\n';
	else cout << "TT\n";
} 