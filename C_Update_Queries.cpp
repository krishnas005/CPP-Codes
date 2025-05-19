#include <bits/stdc++.h>
using namespace std;
const int minn = 1e9;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> arr(m);
        for(int& it: arr) cin >> it;
        string t;
        cin >> t;
        set<int> st(begin(arr), end(arr));
        sort(t.begin(), t.end());
        int idx = 0;
        for(auto& it: st){
            s[it-1] = t[idx++];
        }
        cout<<s<<endl;
    }
    return 0;
}