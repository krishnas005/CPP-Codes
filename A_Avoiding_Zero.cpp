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
        int sum = accumulate(begin(arr), end(arr), 0);
        if(sum == 0) {
            cout << "NO" << endl;
            continue;
        }
        if(sum > 0) {
            sort(arr.rbegin(), arr.rend());
        } else {
            sort(arr.begin(), arr.end()); 
        }
        int curSum = 0;
        bool flag = true;
        for(int i=0; i<n; ++i) {
            curSum += arr[i];
            if(sum == 0) {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << "YES" << endl;
            for(int& it: arr) cout << it << " ";
            cout << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}