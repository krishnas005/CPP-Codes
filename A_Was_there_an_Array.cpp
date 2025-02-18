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
        cin>>n;
        n = n-2;
        vector<int> arr(n);
        string s = "";
        for(int i=0; i<n; ++i) {
            cin >> arr[i];
        }
        for(auto it: arr) s += ('0' + it);
        // cout << s << endl;
        if(s.find("101") != string::npos) {
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
    return 0;
}