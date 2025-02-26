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
        int n, k, p;
        cin >> n >> k >> p;
        int count = 0;
        if(k < -n * p || k > n * p) {
            cout << -1 << endl;
            continue;
        }
        count = abs(k) / p;
        if(abs(k) % p != 0) {
            count++;
        }
        cout << count << endl;
    }
    return 0;
}