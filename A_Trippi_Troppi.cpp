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
    while (T--) {
        vector<string> s(3); 
        for (int i = 0; i < 3; ++i) {
            cin >> s[i];
        }
        string ans = "";
        ans += s[0][0];
        ans += s[1][0];
        ans += s[2][0];
        cout << ans << endl;
    }
    return 0;
}