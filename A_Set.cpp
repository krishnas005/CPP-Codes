#include <bits/stdc++.h>
using namespace std;
#define int long long

void CodeKannu06(int l, int r, int k) {
    int left = l, right = r, ans = 0;
    while (left <= right) {
        int mid = left + (right-left) / 2;
        int multiples = mid * k;
        if (multiples <= r) {
            left = mid + 1;
            ans = max(ans, mid-l+1);
        }
        else right = mid - 1;
    }
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int l, r, k;
        cin >> l >> r >> k;
        CodeKannu06(l, r, k);
    }
    return 0;
}
