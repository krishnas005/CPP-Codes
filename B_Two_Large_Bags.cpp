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
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        set<int> st;
        map<int, int> mp;
        for(int& it: arr) {
            mp[it]++;
            st.insert(it);
        }
        bool flag = true;
        while(!st.empty()) {
            int minn = *st.begin();
            if(mp[minn] == 1) {
                flag = false;
                break;
            }
            mp[minn + 1] += mp[minn] - 2;
            st.erase(minn);
            if(mp[minn+1]) st.insert(minn+1);
            mp[minn] = 0;
        }
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}