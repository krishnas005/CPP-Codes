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
        int n, m, k;
        cin >> n >> m >> k;
        // permutation from 1 to n;
        // first print from n to k
        for(int i=n; i>=k; --i) {
            cout << i << " ";
        }
        // now from m+1 to k-1
        for(int i=m+1; i<k; ++i) {
            cout << i << " ";
        }
        // now from q to m
        for(int i=1; i<=m; ++i) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}