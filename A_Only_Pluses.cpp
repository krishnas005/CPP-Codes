#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        vector<int> arr(3);
        for (int i = 0; i < 3; ++i) cin >> arr[i];
        sort(arr.begin(), arr.end());
        for (int i = 0; i < 5; ++i) {
            arr[0] += 1;
            if (arr[0] > arr[1]) swap(arr[0], arr[1]);
            if (arr[1] > arr[2]) swap(arr[1], arr[2]);
        }
        int ans = arr[0] * arr[1] * arr[2];
        cout << ans << endl;
    }
    return 0;
}
