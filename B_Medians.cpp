#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T;
    cin >> T;
    while (T--) {
        int k, n;
        cin >> n >> k;
        if (k==1 && n==1) cout << 1 << endl << 1 << endl;
        else if (k == 1 || k>=n) cout << -1 << endl;
        else if (k == (n+1) / 2) {
            cout << n << endl;
            for (int i=1; i<=n; ++i) {
                cout << i << " ";
            }
            cout << endl;
        }
        else if (k%2 == 0) {
            cout << 3 << endl;
            cout << 1 << " " << k << " " << k+1 << endl;
        }
        else if (k%2 == 1) {
            cout << 3 << endl;
            cout << 1 << " " << k-1 << " " << k+2 << endl;
        }
    }
    return 0;
}