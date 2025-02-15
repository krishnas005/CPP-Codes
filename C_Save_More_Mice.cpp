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
        vector<int> mice(k);
        for(int& it: mice) cin >> it;
        sort(mice.rbegin(), mice.rend());
        int catPos = 0;
        int ans = 0;
        for(int i=0; i<k; ++i) {
            if(mice[i] > catPos) {
                catPos += n - mice[i];
                ++ans;
            } else break;
        }
        cout << ans << endl;
    }
    return 0;
}