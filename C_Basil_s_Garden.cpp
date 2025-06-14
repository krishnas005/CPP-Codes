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
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        int ans = arr.back();
        for(int i=n-2; i>=0; --i) {
            if(arr[i] > arr[i+1] && ans < arr[i]) {
                ans = arr[i];
            } else ++ans;
        }
        cout << ans << endl;
    }
    return 0;
}