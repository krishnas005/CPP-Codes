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
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int ll = max(l, -m);
        int rr = ll + m;
        cout << ll << " " << rr << endl;
    }
    return 0;
}