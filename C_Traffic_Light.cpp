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
        int n;
        cin >> n;
        char ch;
        cin >> ch;
        string s;
        cin >> s;
        s += s;
        int idx = -1;
        int ans = 0;
        for(int j = 2 * n - 1; j >= 0; --j) {
            if (s[j] == 'g') {
                idx = j;
            } 
            else if (s[j] == ch && idx != -1) {
                ans = max(ans, idx - j);
            }
        }
        cout << ans << endl;
    }
    return 0;
}