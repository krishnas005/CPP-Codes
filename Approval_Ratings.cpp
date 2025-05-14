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
        vector<int> arr(5);
        for(int& it: arr) cin >> it;
        int sum = accumulate(begin(arr), end(arr), 0LL);
        int n = 5;
        int avg = sum / n;
        if(avg >= 7) {
            cout << 0 << endl;
            continue;
        }
        int count = 0;
        sort(arr.begin(), arr.end());
        int ans = 0;
        for(int i=0; i<5; ++i) {
            ++count;
            sum += 10-arr[i];
            avg = sum / n;
            if(avg >= 7) break;
        }
        ans += count * 100;
        cout << ans << endl;
    }
    return 0;
}