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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int& i: a) cin >> i;
        sort(a.begin(), a.end());
        int curr = 1;
        int req = 1;
        for(int i=0; i<n-1; ++i) {
            if(a[i+1] - a[i] > k) curr = 1;
            else ++curr;
            req = max(req, curr);
        }
        cout << n - req << endl;
    }
    return 0;
}