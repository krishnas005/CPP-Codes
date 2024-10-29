#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        for(int i=1; i<n; ++i) {
            ans += (s[i] == '@');
            if(s[i] == '*' && s[i-1] == '*') 
                break;
        } 
        cout << ans << endl;
    }
    return 0;
}