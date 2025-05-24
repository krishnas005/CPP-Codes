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
        vector<int> b(n-1);
        for(int& it: b) cin >> it;
        vector<int> ans;
        ans.push_back(b[0]);
        for(int i=0; i<n-2; ++i) {
            ans.push_back(min(b[i], b[i+1]));
        }
        ans.push_back(b[n-2]);
        for(int& it: ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}