#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(2*n);
        int onSwitches = 0;
        for (int i=0; i<2*n; i++) {
            cin >> arr[i];
            onSwitches += arr[i];
        }
        int minn = onSwitches % 2;
        int maxx = min(onSwitches, 2*n-onSwitches);
        cout << minn << " " << maxx << endl;
    }
    return 0;
}