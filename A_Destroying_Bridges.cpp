#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        if(k == 0) {
            cout << n << endl;
        }
        // if(k > ((n*n)-(3*n))/2) {
        //     int temp = k - ((n*n)-(3*n))/2;
        //     cout << abs(n - 1 - temp) << endl;
        //     continue;
        // }
        else if(k >= n-1) cout << 1 << endl;
        else cout << n << endl;
    }
    return 0;
}