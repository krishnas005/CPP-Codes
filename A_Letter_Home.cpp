#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        int L = arr[0], R = arr.back();
        int  ans = (R - L) + min(abs(s - L), abs(s - R));
        cout << ans << endl;
    }
    return 0;
}