#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n';

vector<vector<int>> dirs = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
vector<char> dir = {'L', 'R', 'U', 'D'};

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n1, n2;
    cin >> n1 >> n2;
    vector<vector<char>> grid(n1, vector<char>(n2));
    int src_x, src_y, dest_x, dest_y;
    for(int i=0; i<n1; ++i) {
        for(int j=0; j<n2; ++j) {
            cin >> grid[i][j];
            if(grid[i][j] == 'A') {
                src_x = i;
                src_y = j;
            } else if(grid[i][j] == 'B'){
                dest_x = i;
                dest_y = j;
            }
        }
    }
    queue<pair<int, int>> q;
    q.push({src_x, src_y});
    vector<vector<bool>> visited(n1, vector<bool>(n2, false));
    vector<vector<char>> direction(n1, vector<char> (n2, ' '));
    vector<vector<pair<int, int>>> parent(n1, vector<pair<int, int>> (n2, {-1, -1}));
    visited[src_x][src_y] = true;
    while(!q.empty()) {
        auto curr = q.front();
        q.pop();
        if(curr.first == dest_x && curr.second == dest_y) {
            string path = "";
            while(curr.first != src_x || curr.second != src_y) {
                auto parent_node = parent[curr.first][curr.second];
                path += direction[curr.first][curr.second];
                curr = parent_node;
            }
            reverse(path.begin(), path.end());
            cout << "YES" << endl;
            cout << path.size() << endl;
            cout << path << endl;
            return 0;
        }
        for(int i=0; i<4; ++i) {
            int _x = curr.first  + dirs[i][0];
            int _y = curr.second + dirs[i][1];
            if(_x >=0 && _x < n1 && _y >=0 && _y < n2 && !visited[_x][_y] && grid[_x][_y] != '#') {
                visited[_x][_y] = true;
                parent[_x][_y] = {curr.first, curr.second};
                direction[_x][_y] = dir[i];
                q.push({_x, _y});
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}