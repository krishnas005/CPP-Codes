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
        for(int& it: arr) it = abs(it);
        int req = arr[0];
        sort(arr.begin(), arr.end());
        int idx = lower_bound(arr.begin(), arr.end(), req) - arr.begin();
        if(idx <= n/2) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}