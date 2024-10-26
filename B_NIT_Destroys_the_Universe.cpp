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
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int count = 0;
        for (int i=0; i<n; ++i) {
            if (arr[i] != 0 && (i== 0 || arr[i-1]==0)) {
                count++;
            }
        }        
        cout << min(count, 2LL) << endl;
    }
    return 0;
}
