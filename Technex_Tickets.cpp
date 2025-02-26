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
        int ans = 0;
        while(n > 3) {
            ++ans;
            n -= 2;
        }
        if(n == 1 || n == 3) {
            cout << ans + 1 << endl;
        } else {
            cout << ans + 2 << endl;
        }
    }
    return 0;
}