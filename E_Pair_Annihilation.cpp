#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int dfs(int curr, int parent, int& ans, vector<vector<pair<int, int>>>& adj, int n, vector<int>& x) {
    int sum = x[curr];
    for(auto& nbr: adj[curr]) {
        int v = nbr.first;
        int w = nbr.second;
        if(v == parent) continue;
        int temp = dfs(v, curr, ans, adj, n, x);
        ans += abs(temp) * w;
        sum += temp;
    }
    return sum;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> x(n+1);
    for(int i=1; i<=n; ++i) {
        cin >> x[i];
    }
    vector<vector<pair<int, int>>> adj(n+1);
    for(int i=0; i<n-1; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    int ans = 0;
    dfs(1, -1, ans, adj, n, x);
    cout << ans << endl;
    return 0;
}