#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void dfs(int curr, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[curr] = true;
    for(auto& nbr: adj[curr]) {
        if(!visited[nbr]) {
            dfs(nbr, adj, visited);
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<bool> visited(n+1, 0);
    vector<vector<int>> adj(n+1);
    for(int i=0; i<m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<pair<int, int>> ans;
    int count = 0;
    for(int i=1; i<=n; ++i) {
        if(!visited[i]) {
            if(i != 1) {
                count++;
                ans.push_back({i-1, i});
            }
            dfs(i, adj, visited);
        }
    }
    cout << count << endl;
    for(auto& x: ans) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}