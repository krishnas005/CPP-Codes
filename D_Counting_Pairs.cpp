#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for(int& i: a) cin >> i;
        sort(a.begin(), a.end());
        int summ = accumulate(a.begin(), a.end(), 0LL);
        int ans = 0;
        for(int i=0; i<n; ++i) {
            int temp = summ - a[i];
            if(temp < x) continue;
            int s = max(temp-y, 0LL);
            int e = temp - x;
            int left = lower_bound(a.begin(), a.end(), s) - a.begin();
            int right = upper_bound(a.begin(), a.end(), e) - a.begin()-1;
            if(right >= left) {
                ans += (right-left+1);
                if(i>=left && i<=right) {
                    --ans;
                }
            }
        }
        ans = ans / 2;
        cout << ans << endl;
    }
    return 0;
}
