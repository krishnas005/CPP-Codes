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
        string res = "";
        for(int i=0; i<n; ++i) {
            if((int)s[i] % 2 == 1) {
                res += s[i];
            }
            if(res.size() == 2) break;
        }
        if(res.size() < 2) {
            cout << -1 << endl;
        } else {
            cout << res << endl;
        }
    }
    return 0;
}