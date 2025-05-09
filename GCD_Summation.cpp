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
        if(k < n-1) cout << -1 << endl;
        else {
            int last = k - (n-2);
            int remm = (last - (n-2) % last) % last;
            if(remm == 0) remm = last;
            int temp1 = last + (n - 2) - remm;
            int x = remm + last * (temp1 / last + 1);
            for(int i=0; i<n-1; ++i) {
                cout << x + i << " ";
            }
            cout << last << endl;
        }
    }
    return 0;
}