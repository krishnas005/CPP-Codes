#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        map<int, int> mp;
        int ans = 0;
        int maxx = INT_MIN;
        int total = 0;
        for(int i=0; i<n; ++i) {
            mp[arr[i]]++;
            total += arr[i];
            maxx = max(maxx, arr[i]);
            if(total % 2 == 0 && mp.count(total / 2)) ++ans;
        }
        cout << ans << endl;
    }
    return 0;
}