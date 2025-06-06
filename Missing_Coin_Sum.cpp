#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& it: arr) cin >> it;
    sort(begin(arr), end(arr));
    int ans = 1;
    for(int i=0; i<n; ++i) {
        if(ans < arr[i]) break;
        ans += arr[i];
    }
    cout << ans << endl;
    return 0;
}