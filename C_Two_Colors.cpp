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
        int n, m;
        cin >> n >> m;
        vector<int> arr(m);
        for(int& it: arr) cin >> it;
        vector<int> freqq(n+1, 0);
        for(int& it: arr) {
            if(it <= n) {
                freqq[it]++;
            }
        }
        vector<int> counts(n+2, 0);
        for(int i=n; i>=1; i--) {
            counts[i] = freqq[i] + counts[i+1];
        }
        int ans = 0;
        for(int i=1; i<n; ++i) {
            int j = n - i;
            int left = counts[i];
            int right = counts[j];
            int common = counts[max(i, j)];
            ans += left * right - common;
        }
        cout << ans << endl;
    }
    return 0;
}