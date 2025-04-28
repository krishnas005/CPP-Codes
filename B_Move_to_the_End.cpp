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
        vector<int> prefix(n+1), maxx(n+1);
        for(int i=1; i<=n; ++i) {
            prefix[i] = prefix[i-1] + arr[i-1];
            if(i == 1) maxx[i] = arr[i-1];
            else maxx[i] = max(maxx[i-1], arr[i-1]);
        }
        int total = prefix[n];
        for(int k=1; k<=n; k++) {
            int r = n - k + 1;
            cout << total - prefix[r] + maxx[r] << " ";
        }
        cout << endl;
    }
    return 0;
}