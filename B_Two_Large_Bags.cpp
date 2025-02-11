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
        for(int& it: arr) cin >> it;
        map<int, int> mp;
        for(int it: arr) mp[it]++;
        for(auto it: mp) cout << it.first << " " << it.second << endl;
        cout << endl;
        bool flag = false;
    }
    return 0;
}