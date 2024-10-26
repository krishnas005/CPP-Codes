#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a = 0, b = 0;
        while (n--) {
            int p, q;
            cin >> p >> q;
            a = max(p, a);
            b = max(q, b);
        }
        cout << 2 * a + (2 * b) << endl;
    }
    return 0;
}
