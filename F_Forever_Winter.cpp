#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        vector<int> deg(n + 1, 0);
        for(int i=0; i<m; ++i) {
            int u, v;
            cin >> u >> v;
            deg[u]++;
            deg[v]++;
        }
        map<int, int> mp;
        for(int i=1; i<=n; ++i) {
            mp[deg[i]]++;
        }
        int x = 0, y = 0;
        for(auto& it : mp) {
            if(it.first == 1) continue;
            if(it.second == 1) x = it.first;
            else y = it.first - 1; 
        }
        cout << x << " " << y << endl;
    }
    return 0;
}