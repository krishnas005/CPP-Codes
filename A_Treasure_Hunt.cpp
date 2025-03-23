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
        int x, y, a;
        cin >> x >> y >> a;
        int req = a + 1;
        int total = x + y;
        int temp = (req - 1) / total;
        int remaining = req - temp * total;
        if(remaining <= x) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}