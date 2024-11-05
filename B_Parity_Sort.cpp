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
        vector<int> sortedArr = arr;
        bool flag = true;
        sort(sortedArr.begin(), sortedArr.end());
        for(int i=0; i<n; ++i) {
            if((arr[i]%2) != (sortedArr[i]%2)) {
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}