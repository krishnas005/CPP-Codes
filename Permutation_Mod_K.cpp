#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        if (n == 1 || k == 1 || (k == 2 && n % 2 == 1)) {
            cout << -1 << endl;
            continue;
        }
        if (n % k != 1) {
            for (int i = 2; i <= n; i++) {
                cout << i << " ";
            }
            cout << 1 << endl;
        }
        else {
            for (int i = 3; i <= n; i++) {
                cout << i << " ";
            }
            cout << 1 << " " << 2 << endl;
        }
    }
    return 0;
}