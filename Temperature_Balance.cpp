#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for(int& i: arr) cin >> i;
        int ans = 0;
        for(int i=0; i<N-1; i++) {
            ans += abs(arr[i]);
            arr[i+1] += arr[i];
        } 
        cout << ans << endl;
    }
    return 0;
}