#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool check(const vector<int>& b) {
    int n = b.size();
    for(int i=0; i<n; ++i) {
        int prev = b[(i-1+n)%n];
        int curr = b[i];
        int next = b[(i+1)%n];
        if(!((prev < curr && curr > next) || (prev > curr && curr < next)))
            return false;
    }
    return true;
}

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
        sort(begin(arr), end(arr));
        if(n&1) {
            cout << "NO" << endl;
            continue;
        }
        vector<int> ans(n);
        for(int i=0; i<n/2; ++i) {
            ans[2*i]   = arr[i];
            ans[2*i+1] = arr[i+n/2];
        }
        if(check(ans)) {
            cout << "YES" << endl;
            for(auto& it: ans) cout << it << " ";
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}