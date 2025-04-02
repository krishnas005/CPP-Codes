#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 998244353

int solve(int num) {
    int ans = 1;
    while(num--) {
        ans = (ans * 2) % MOD;
    }
    return ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int num;
        cin >> num;
        int ans = 0;
        if(num & 1) {
            ans = solve(num - 1) % MOD;
        } else {
            ans = (3 * solve(num - 2)) % MOD;
        }
        cout << ans << endl;
    }
    return 0;
}