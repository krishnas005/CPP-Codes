#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int X, Y, K;
        cin >> X >> Y >> K;
        int val = min(X, Y);
        cout << "0 " << val << " " << val << " 0" << endl;
        cout << "0 0 " << val << " " << val << endl;
    }
    return 0;
}