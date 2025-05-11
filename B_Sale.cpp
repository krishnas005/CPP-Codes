#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int m, n;
    cin >> m >> n;
    vector<int> arr(m);
    for(int& it: arr) cin >> it;
    sort(arr.begin(), arr.end());
    int ans = 0;
    for(int i=0; i<m; ++i) {
        if(n == 0) break;
        if(arr[i] >= 0) break;
        --n;
        ans += abs(arr[i]);
    }
    cout << ans << endl;
    return 0;
}