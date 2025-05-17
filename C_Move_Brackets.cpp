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
        int ans = 0;
        int curr = 0;
        for(int i=0; i<n; ++i) {
            if(s[i] == '(') ++curr;
            else --curr;
            if(curr < 0) ans = max(ans, abs(curr));
        }
        cout << ans << endl;
    }
    return 0;
}