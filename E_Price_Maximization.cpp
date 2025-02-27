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
        vector<int> a(n);
        for(int& it: a) cin >> it;
        vector<int> b(k, 0);
        for(int i=0; i<n; ++i) {
            b[a[i] % k]++;
        }
        int ans = 0;
        for(int i=0; i<n; ++i) ans += a[i] / k;
        int temp = 1;
        for(int i=k-1; i>=0; --i) {
            temp = max(temp, k-i);
            while(temp < k && b[i] > 0) {
                while(b[temp] == 0) {
                    ++temp;
                    if(temp == k) break;
                }
                if(temp == k) break;
                if(b[temp] >= 2 || temp != i && b[temp] >= 1) {
                    ++ans;
                    b[temp]--;
                    b[i]--;
                } else break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}