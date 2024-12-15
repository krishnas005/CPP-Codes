#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T;
    cin >> T;
    while(T--) {
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int ans = 0;
        int temp = 1;
        while(temp <= r2) {
            int high = min(r1, r2/temp);
            int low = max(l1, (l2-1)/temp+1);
            if(low <= high) ans += (high-low+1);
            temp *= k;
        }
        cout << ans << endl;
    }
    return 0;
}