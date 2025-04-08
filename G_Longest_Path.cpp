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
    vector<int> indegree(n+1, 0);
    for(int i=0; i<m; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        indegree[b]++;
    }
    queue<int> q;
    for(int i=1; i<=n; ++i) if(indegree[i] == 0) q.push(i);
    vector<int> topo(n+1, 0);
    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        for(int& v: adj[curr]) {
            topo[v] = max(topo[v], topo[curr]+1);
            indegree[v]--;
            if(indegree[v] == 0) q.push(v);
        }
    }
    int ans = *max_element(topo.begin(), topo.end());
    cout << ans;
    return 0;
}