#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++) {
            mp[v[i]]++;
        }
        int mex = 0;
        for(int i=0; i<1e15; ++i) {
            if(mp[i] == 0) {
                mex = i;
                break;
            } 
        }
        if(mex == 0) {
            cout << "2" << endl;
            cout << "1 1" << endl;
            cout << "2 " << n << endl;
            continue;
        }
        mp.clear();
        int end = 0;
        vector<pair<int, int>> ans;
        for(int start=0; start<n; ++start) {
            if(v[start] < mex) {
                mp[v[start]]++;
            }
            if(mp.size() == mex) {
                ans.push_back({end+1, start+1});
                end = start + 1;
                mp.clear();
            } 
        }
        ans[ans.size()-1].second = n;
        if(ans.size() < 2) {
            cout << -1 << endl;
        }
        else {
            cout << ans.size() << endl;
            for(auto a:ans) {
                cout << a.first << " " << a.second << endl;
            }
        }
    }
    return 0;
}