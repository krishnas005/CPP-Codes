#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void dfs(int u, int parent, vector<vector<int>>& adj, vector<int>& a, vector<int>& max_alt, vector<int>& min_alt) {
    if(parent == -1) {
        max_alt[u] = min_alt[u] = a[u];
    } else {
        max_alt[u] = max(a[u], a[u] - min_alt[parent]);
        min_alt[u] = min(a[u], a[u] - max_alt[parent]);
    }
    for(int& v: adj[u]) {
        if(v != parent) {
            dfs(v, u, adj, a, max_alt, min_alt);
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> a(n+1);
        for(int i=1; i<=n; i++) cin >> a[i];
        vector<vector<int>> adj(n+1);
        for(int i=0; i<n-1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> max_alt(n+1), min_alt(n+1);
        dfs(1, -1, adj, a, max_alt, min_alt);  
        for(int i=1; i<=n; i++) {
            cout << max_alt[i] << " ";
        }
        cout << endl;
    }
    return 0;
}