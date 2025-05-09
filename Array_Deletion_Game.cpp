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
        n = 2 * n;
        vector<int> arr(n+1);
        for(int i=1; i<=n; ++i) cin >> arr[i];
        priority_queue<int> pq;
        int ans = 0;
        for(int i=n; i>=1; i-=2) {
            pq.push(arr[i]);
            pq.push(arr[i-1]);
            ans += pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}