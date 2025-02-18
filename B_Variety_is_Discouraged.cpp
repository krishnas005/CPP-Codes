#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> mp;
        for(int& it: arr) cin >> it;
        for(int& it: arr) ++mp[it];
        int maxLen = 0;
        int start = 0;
        int s = -1;
        int e = -1;
        for(int i=0; i<n; i++) {
            if(mp[arr[i]] != 1) {
                start = i+1;
                continue;
            }
            if(i-start+1 > maxLen) {
                maxLen = i-start+1;
                s = start;
                e = i;
            }
        }
        if(s == -1) cout << "0" << endl;
        else cout << s+1 << " " << e+1 << endl;
    }
    return 0;
}