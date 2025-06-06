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
        vector<int> a(n), b(n);
        for(int& it: a) cin >> it;
        for(int& it: b) cin >> it;
        int cnt = 0;
        for(int i=0; i<n; ++i) {
            if(a[i] < b[i]) ++cnt;
        }
        if(cnt >= 2) {
            cout << "NO" << endl;
            continue;
        }
        if(cnt == 0) cout << "YES" << endl;
        else {
            int idx = -1;
            int i = 0;
            while(i < n) {
                if(a[i] < b[i]) {
                    idx = i;
                    break;
                }
                ++i;
            }
            int temp = b[idx] - a[idx];
            bool flag = true;
            for(int i=0; i<n; ++i) {
                if(i == idx) continue;
                if(a[i] - temp < b[i]) {
                    flag = false;
                    break;
                } 
            }
            if(!flag) cout << "NO" << endl;
            else cout << "YES" << endl;
        } 
    }
    return 0;
}