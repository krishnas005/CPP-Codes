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
        int n, k;
        cin >> n >> k;
        k--;
        int ans = 0;
        if(n % 2 == 0) {
            ans = (n + k - 1) / k;
        } else {
            if(n == k) {
                ans = 1;
            } else {
                ans = (n + k - 2) / k;
            }
        }
        cout << ans << endl;
    }
    return 0;
}