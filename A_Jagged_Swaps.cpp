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
        if(arr[0] == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}