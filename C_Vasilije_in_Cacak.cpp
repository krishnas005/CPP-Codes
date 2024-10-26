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
        int n, k, x;
        cin >> n >> x >> k; 
        int minPossible = (x*(x+1)) / 2;
        int maxPossible = ((n*(n+1))/2 - ((n-x)*(n-x+1))/2);
        if (minPossible <= k && k <= maxPossible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}