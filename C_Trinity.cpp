#include <bits/stdc++.h>
using namespace std;
#define int int

void solve(int n, vector<int> &arr) {
    sort(arr.begin(), arr.end());
    int ans = n;
    int start = 1, end = n;
    while (start <= end) {
        int mid = start + (end-start)/2;
        bool found = false;
        if (mid == 1) {
            ans = min(ans, n-1);
            start = mid + 1;
            continue;
        }
        for (int i=0; i+mid-1<n; i++) {
            int x = arr[i] + arr[i+1];
            if (x > arr[i+mid-1]) {
                found = true; 
                break;
            }
        }
        if (found) {
            ans = min(ans, n-mid);
            start = mid + 1;
        }
        else end = mid-1;
    }
    cout << ans << endl;
}

int32_t main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i=0; i<n; i++) cin >> arr[i];
        solve(n, arr);
    }
    return 0;
}
