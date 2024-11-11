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
        int a, b;
        cin >> a >> b;
        if(a == b) {
            cout << 0 << " " << 0 << endl;
            continue;
        }
        int maxx = abs(a-b);
        int m = min(a%maxx, maxx-a%maxx);
        cout << maxx << " " << m << endl;
    }
    return 0;
}
