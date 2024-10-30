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
        unordered_map<int, int> mp;
        for(int i=0; i<n; ++i) {
            int x;
            cin >> x;
            mp[x]++;
        }
        bool flag = true;
        for(auto i: mp) {
            if(i.second > 1) flag = false;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}