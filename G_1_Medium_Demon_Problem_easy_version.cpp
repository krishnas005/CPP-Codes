#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<vector<int>> adj(n); 
        vector<int> indegree(n, 0);
        for(int i=0; i<n; i++) {
            int r;
            cin >> r;
            r--; 
            adj[i].push_back(r);
            indegree[r]++; 
        }
        queue<int> q;
        for(int i=0; i<n; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }
        int ans = 0;
        while(!q.empty()) {
            int sz = q.size();
            ans++;
            while(sz--) {
                int curr = q.front();
                q.pop();
                for(auto& nbr: adj[curr]) {
                    indegree[nbr]--;
                    if(indegree[nbr] == 0) {
                        q.push(nbr);
                    }
                }
            }
        }
        cout << ans + 2 << endl;
    }
    return 0;
}