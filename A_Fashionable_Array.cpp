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
        for(int & it: arr) cin >> it;
        sort(begin(arr), end(arr));
        int left_even = n, right_even = -1;
        int left_odd  = n, right_odd  = -1;
        for(int i=0; i<n; i++) {
            if((arr[i] & 1) == 0) {
                left_even = min(left_even, i);
                right_even = max(right_even, i);
            } else {
                left_odd  = min(left_odd, i);
                right_odd  = max(right_odd, i);
            }
        }
        int temp = 1;
        if(left_even <= right_even) {
            temp = max(temp, right_even - left_even + 1);
        }
        if(left_odd <= right_odd) {
            temp = max(temp, right_odd - left_odd + 1);
        }
        cout << (n - temp) << endl;
    }
    return 0;
}