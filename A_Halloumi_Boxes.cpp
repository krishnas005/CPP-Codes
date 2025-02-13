#include <bits/stdc++.h>
using namespace std;
#define int long long
#define minn 1e9
#define maxx 1e9
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        if(k==1 && !is_sorted(arr.begin(), arr.end())) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}