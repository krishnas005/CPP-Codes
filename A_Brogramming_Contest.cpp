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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 1;
        int i = 0;
        for(i=0; i<n; i++) {
            if(s[i] == '1') break;
        }
        // --i;
        if(i == n) {
            cout << 0 << endl;
        }
        else {
            for(int j=i+1; j<n; ++j) {
                if(s[j] != s[j-1]) ++ans;
            }
            cout << ans << endl;
        }
    }
    return 0;
}