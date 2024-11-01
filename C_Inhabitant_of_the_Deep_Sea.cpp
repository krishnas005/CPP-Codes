#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        int k;
        cin >> n >> k;
        deque<int> dq(n);
        for (int i=0; i<n; ++i) {
            cin >> dq[i];
        }
        while (dq.size()>1 && k) {
            int minn = min(dq.front(), dq.back());
            if (k < 2*minn) {
                dq.front() -= k/2 + k % 2;
                dq.back() -= k/2;
                k = 0;
            }
            else {
                dq.front() -= minn;
                dq.back() -= minn;
                k -= 2 * minn;
            }
            if (dq.front() <= 0) {
                dq.pop_front();
            }
            if (dq.back() <= 0) {
                dq.pop_back();
            }
        }
        int ans = n - dq.size();
        cout << ans + (dq.size() && dq.front()<=k) << endl;
    }
    return 0;
}