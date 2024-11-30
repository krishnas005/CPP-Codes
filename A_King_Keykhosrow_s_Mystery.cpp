#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T;
    cin >> T;
    while(T--) {
        int a, b;
        cin >> a >> b;
        int ans = max(a, b);
        while(ans%a != ans%b) {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
