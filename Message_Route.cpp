#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    vector<int> parent(n + 1, -1);
    vector<int> dist(n + 1, -1);
    for(int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    queue<int> q;
    q.push(1);
    dist[1] = 1; 
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        for(auto& nbr: adj[node]) {
            if(dist[nbr] == -1) {
                dist[nbr] = dist[node] + 1;
                parent[nbr] = node;
                q.push(nbr);
            }
        }
    }
    if(dist[n] == -1) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    vector<int> path;
    for(int curr=n; curr!=-1; curr=parent[curr]) {
        path.push_back(curr);
    }
    reverse(path.begin(), path.end());
    cout << path.size() << endl;
    for(auto& node : path) {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}
