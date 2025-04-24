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
        int cnt = 0;
        for(char& c: s) {
            if(c == '1') cnt++;
        }
        int ans = cnt * (n - 2) + n;
        cout << ans << endl;
    }
    return 0;
}