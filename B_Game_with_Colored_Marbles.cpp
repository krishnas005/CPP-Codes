#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        for(int i=0; i<n; ++i) {
            int x;
            cin >> x;
            mp[x]++;
        }
        int singles = 0;
        for(auto &it: mp) {
            if(it.second == 1) ++singles;
        }
        int temp = ((singles+1)/2)*2;
        cout << (temp + (mp.size()-singles)) << endl;
    }
    return 0;
}
