#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

unordered_map<int, int> dp;
bool solve(int i, int d, string &p, string &s, int diff, int n, int m) {
    int j = i + d;
    if(i == n) return (d == diff);
    if(j >= m || s[j] != p[i]) return false;
    int key = ((int) i << 20) | d;
    if(dp.find(key) != dp.end()) return dp[key];
    bool ans = false;
    if(solve(i + 1, d, p, s, diff, n, m)) ans = true;
    else if (j+1 < m && s[j+1] == p[i] && d+1 <= diff && solve(i+1, d+1, p, s, diff, n, m)) ans = true;
    return dp[key] = ans;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        dp.clear(); 
        string p, s;
        cin >> p >> s;
        int n = p.size();
        int m = s.size();
        int diff = m - n; 
        bool flag = solve(0, 0, p, s, diff, n, m);
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}