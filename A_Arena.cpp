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
        vector<int> arr(n);
        for(auto& i: arr) cin >> i;
        int minn = *min_element(arr.begin(), arr.end());
        int countMinn = count(arr.begin(), arr.end(), minn);
        int ans = n - countMinn;
        cout << ans << endl;
    }
    return 0;
}