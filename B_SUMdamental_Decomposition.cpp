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
        int n, x;
        cin >> n >> x;
        if(x == 0) {
            if(n == 1) cout << -1 << endl;
            else if(n&1) cout << n + 3 << endl;
            else cout << n << endl;
            continue;
        } else if(x == 1) {
            if(n&1) cout << n << endl;
            else cout << n + 3 << endl;
            continue;
        } 
        int cnt = __builtin_popcount(x);
        if(cnt >= n) cout << x << endl;
        else if((n-cnt)&1) cout << (x + (n-cnt+1)) << endl;
        else cout << (x + (n-cnt)) << endl;
    }
    return 0;
}