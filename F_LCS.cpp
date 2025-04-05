#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int n1 = s.size();
    int n2 = t.size();
    vector<vector<int>> dp(n1+1, vector<int> (n2+1, -1));
    for(int i=0; i<=n1; ++i) {
        for(int j=0; j<=n2; ++j) {
            if(i == 0 || j == 0) dp[i][j] = 0;
            else if(s[i-1] == t[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    int i = n1;
    int j = n2;
    string ans = "";
    while(i > 0 && j > 0) {
        if(s[i-1] == t[j-1]) {
            ans += s[i-1];
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]) --i;
        else --j;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}