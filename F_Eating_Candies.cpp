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
        for(auto& i: arr) cin >> i;
        int ans = 0;
        int i = 0;
        int j = n-1;
        int aliceTotal = arr[0];
        int bobTotal = arr[n-1];
        while(i < j) {
            if(aliceTotal == bobTotal) {
                ans = max(ans, n-j+i+1);
            }
            if(aliceTotal <= bobTotal) {
                i++;
                aliceTotal += arr[i];
            } else {
                j--;
                bobTotal += arr[j];
            }
        }
        cout << ans << endl;
    }
    return 0;
}