#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> elements(n);
        for (int i=0; i<n; ++i) {
            cin >> elements[i];
        }
        int ans = 1e9;
        for (int i=0; i<n; ++i) {
            int currCount = i;
            for (int j=i+1; j<n; ++j) {
                if (elements[j] > elements[i]) {
                    currCount++;
                }
            }
            ans = min(ans, currCount);
        }
        cout << ans << endl;
    }
    return 0;
}
