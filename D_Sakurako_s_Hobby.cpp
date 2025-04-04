#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(int curr, vector<int>& p, string& s, int n) {
    int count = 0;
    queue<int> q;
    q.push(curr);
    vector<bool> visited(n, false); 
    while(!q.empty()) {
        int temp = q.front();
        q.pop();
        if(visited[temp]) continue; 
        visited[temp] = true;
        int v = p[temp]; 
        if(s[v-1] == '0') ++count; 
        q.push(v);
    }
    return count;
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
        vector<int> p(n+1);
        for(int i=1; i<=n; ++i) cin >> p[i];
        string s;
        cin >> s;
        vector<int> ans(n+1);
        for(int i=1; i<=n; ++i) {
            ans[i] = solve(i, p, s, n+1);
        }
        for(int i=1; i<=n; ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}