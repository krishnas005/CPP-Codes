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
        int n;
        cin >> n;
        if(n == 3) cout << -1 << endl;
        else {
            cout << n + n - 1  + n - 2 << endl;
        }
    }
    return 0;
}