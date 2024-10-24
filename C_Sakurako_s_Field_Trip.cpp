#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int n, vector<int>& a) {
    for(int i=1; i<=(n-1)/2; i++) {
        if(a[i]==a[i-1] || a[n-1-i]==a[n-i]) {
            swap(a[i], a[n-1-i]);
        }
    }
    int ans = 0;
    for(int i=0; i<n-1; i++) {
        if(a[i] == a[i+1]) {
            ++ans;
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; ++i) cin >> arr[i];
        solve(n, arr);
    }
    return 0;
}