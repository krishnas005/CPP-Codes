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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int evenParity, oddParity;
        if(a[0]%2 == 0) {
            evenParity = 0;
        } else evenParity = 1;
        if(a[1]%2 == 0) {
            oddParity = 0;
        } else oddParity = 1;
        bool ans = true;
        for(int i=0; i<n; i+=2) {
            if(a[i]%2 != evenParity) {
                ans = false;
                break;
            }
        }
        if(ans) {
            for(int i=1; i<n; i+=2) {
                if(a[i]%2 != oddParity) {
                    ans = false;
                    break;
                }
            }
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}