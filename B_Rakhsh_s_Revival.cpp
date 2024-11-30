#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        int ans = 0; 
        int i = 0;
        while(i < n) {
            int currZeroCount = 0;
            if(s[i] == '1') ++i;
            if(s[i] == '0') {
                while(i<n && s[i] =='0') {
                    ++currZeroCount;
                    ++i;
                    if(currZeroCount == m) {
                        ++ans;
                        i += k-1;
                        break;
                    }
                }
            }
            if(currZeroCount < m) ++i;
        }
        cout << ans << endl;
    }
    return 0;
}