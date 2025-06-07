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
    int ans = 0;
    for(int i=0; i<=n; ++i) {
        int cnt = 0;
        for(int j=0; j<n; ++j) {
            if(arr[j] >= i) ++cnt;
        }
        if(cnt >= i) {
            ans = i;
        } 
    }
    cout << ans << endl;
    return 0;
}