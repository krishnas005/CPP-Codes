#include <bits/stdc++.h>
using namespace std;
#define int long long
#define maxx 1e9
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
        vector<int> a(n), b(n);
        for(int& i: a) cin >> i;
        for(int& i: b) cin >> i;
        int req = maxx;
        for(int i=0; i<n; ++i) {
            if(b[i] != 0) req = min(req, a[i]-b[i]);
        }
        if(req == maxx) {
            cout << "YES" << endl;
            continue;
        }
        if(req < 0) {
            cout << "NO" << endl;
            continue;
        }
        bool flag = true;
        for(int i=0; i<n; ++i) {
            if(a[i] - b[i] > req) {
                flag = false;
                break;
            }
            if(b[i] != 0 && a[i]-b[i] < req) {
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}