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
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int& it: arr) cin >> it; 
        int idx1 = -1, idx2 = -1;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 1) {
                if(idx1 == -1) idx1 = i;
                idx2 = i;
            }
        }
        if(idx2 - idx1 + 1 <= x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}