#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        int currSum = 0; 
        bool flag = false;
        for (int i = 0; i < n; ++i) {
            currSum += a[i];
            if (currSum > k) {
                currSum -= a[i];
                flag = true;
                cout << k - currSum << endl;
                break;
            }
        }
        if (!flag) cout << k - currSum << endl;
    }
    return 0;
}
