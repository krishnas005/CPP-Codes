#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < n; i ++){
            if (s[i] == s[0]) ans = max(ans, i+1);
            if (s[i] == s[n-1]) ans = max(ans, n-i);
        }
        cout << ans << endl;
    }
    return 0;
}