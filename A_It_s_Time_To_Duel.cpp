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
        if(sum == n) cout << "YES" << endl;
        else {
            bool flag = false;
            for(int i=0; i<n-1; ++i) {
                if(arr[i] == 0 && arr[i+1] == 0) {
                    flag = true;
                    break;
                }
            }
            if(flag) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}