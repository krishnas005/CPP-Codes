#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000;
vector<string> grid;
vector<vector<bool>> visited;
int n, m;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y) {
    visited[x][y] = true;
    for(int i=0; i<4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && grid[nx][ny] == '.') {
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m;
    grid.resize(n);
    visited.assign(n, vector<bool>(m, false));
    for(int i=0; i<n; ++i) {
        cin >> grid[i];
    }
    int ans = 0;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            if(grid[i][j] == '.' && !visited[i][j]) {
                dfs(i, j);
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}