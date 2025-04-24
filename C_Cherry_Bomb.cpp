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
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for(int& it: a) cin >> it;
        for(int& it: b) cin >> it;
        int val = -1;
        bool flag = false;
        for(int i=0; i<n; ++i) {
            if(b[i] != -1) {
                if(val != -1) {
                    if(a[i] + b[i] != val) {
                        flag = true;
                        break;
                    }
                } else val = a[i] + b[i];
            } else {

            }
        }
        if(flag) cout << 0 << endl;
        else {
            if(val != -1) {
                int ans = 1;
                for(int i=0; i<n; i++) {
                    if(b[i] == -1) {
                        int temp = val - a[i];
                        if(temp < 0 || temp > k) {
                            ans = 0;
                            break;
                        }
                    }
                }
                cout << ans << endl;
            } else {
                int minn = *min_element(a.begin(), a.end());
                int maxx = *max_element(a.begin(), a.end());
                if(minn + k < maxx) {
                    cout << 0 << endl;
                } else {
                    cout << (minn + k - maxx + 1) << endl;
                }
            }
        }
    }
    return 0;
}