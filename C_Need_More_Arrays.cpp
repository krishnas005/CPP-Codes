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
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        int last = -1;
        int ans = 0;
        for(int x: arr) {
            if(x > last+1) {
                ++ans;
                last = x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}