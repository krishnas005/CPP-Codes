#include <bits/stdc++.h>
#define int long long
#define maxx 1e18
#define minn -1e18
using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for(int& it: a) cin >> it;
        for(int& it: b) cin >> it;
        sort(b.begin(), b.end());
        int val = minn;
        bool flag = true;
        for(int i=0; i<n; i++) {
            int temp = maxx;
            if(a[i] >= val) {
                temp = a[i];
            }
            int j = 0;
            while(j<m && b[j] < val+a[i]) {
                j++;
            }
            if(j<m) {
                temp = min(temp, b[j]-a[i]);
            }
            if(temp == maxx) {
                flag = false;
                break;
            }
            val = temp;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}