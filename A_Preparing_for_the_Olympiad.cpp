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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int& i: a) cin >> i;
        for(int& i: b) cin >> i;
        int i = 0;
        int m = 0, s = 0;
        for(int i=0; i<n-1; ++i) {
            if(a[i] > b[i+1]) {
                m += a[i];
                s += b[i+1];
            }
        }
        m += a[n-1];
        cout << m - s << endl;
    }
    return 0;
}