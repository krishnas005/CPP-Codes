#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int& it: a) cin >> it;
        int j = 0;
        a.push_back(INT_MAX);
        int ans = LLONG_MAX;
        for(int i=1; i<=n; ++i) {
            if(a[i] != a[i-1]) {
                ans = min(ans, (j+n-i) * a[i-1]);
                j = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}