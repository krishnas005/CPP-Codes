#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isPossible(int n, const vector<int>& cells, int k) {
    vector<bool> noExtra(n + 1, false);  
    vector<bool> withExtra(n + 1, false); 
    noExtra[0] = true; 
    for (int i = 0; i < n; ++i) {
        vector<bool> nextNoExtra(n + 1, false); 
        vector<bool> nextWithExtra(n + 1, false);
        if (noExtra[i]) { 
            if (i + 1 < n && cells[i + 1] - cells[i] <= k) {
                nextNoExtra[i + 2] = true;
            }
            if (k >= 1) {
                nextWithExtra[i + 1] = true;
            }
        }
        if (withExtra[i]) {
            if (i + 1 < n && cells[i + 1] - cells[i] <= k) {
                nextWithExtra[i + 2] = true;
            }
        }
        for (int j = 0; j <= n; ++j) {
            if (nextNoExtra[j]) noExtra[j] = true;
            if (nextWithExtra[j]) withExtra[j] = true;
        }
    }
    return noExtra[n] || withExtra[n];
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i=0; i<n; ++i) cin >> arr[i];
        int left = 0, right = 1e18;
        int ans = right;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (isPossible(n, arr, mid)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
