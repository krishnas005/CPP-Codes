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
        bool ans = true;
        for(int i=0; i<n; ++i) {
            if(s[i] != 'W') {
                int B = 0;
                int R = 0;
                while(i<n && s[i] != 'W') {
                    if(s[i] == 'R') R++;
                    else B++;
                    i++;
                }
                if(B==0 || R==0) {
                    ans = false;
                    break;
                }
            }
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}