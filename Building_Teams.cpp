#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> ans(n+1, 0);
    function<bool(int)> bfs = [&] (int node) {
        queue<int> q;
        q.push(node);
        ans[node] = 1;
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            for(int& nbr: adj[curr]) {
                if(ans[nbr] == 0) {
                    ans[nbr] = 3 - ans[curr];
                    q.push(nbr);
                } else if(ans[nbr] == ans[curr]) {
                    return false;
                }
            }
        }
        return true;
    };
    for(int i=1; i<=n; ++i) {
        if(ans[i] == 0) {
            if(!bfs(i)) {
                cout << "IMPOSSIBLE" << endl;
                return 0;
            }
        }
    }
    for(int i=1; i<=n; ++i) cout << ans[i] << " ";
    cout << endl; 
    return 0;
}