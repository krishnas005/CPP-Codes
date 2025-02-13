#include <bits/stdc++.h>
using namespace std;
#define int long long
const int minn = 1e9;
const int maxx = 1e9;
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
        int minusOne = 0;
        int one = 0;
        for(int i=0; i<n; ++i) {
            if(arr[i] == -1) ++minusOne;
            else ++one;
        }
        int ans = 0;
        if(one < minusOne) {
            ans = (minusOne - one + 1) / 2;
            one += ans;
            minusOne -= ans;
        }
        if(minusOne % 2) ++ans;
        cout << ans << endl;
    }
    return 0;
}