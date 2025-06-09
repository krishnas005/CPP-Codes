#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        unordered_map<int, int> mp;
        for(int i=n-1; i>=0; --i) {
            if(!mp.count(arr[i])) mp[arr[i]] = i;
        }                         
        unordered_set<int> req;
        unordered_set<int> st;
        vector<int> a;
        int count = 0;
        int temp = 0;
        int m = n;
        for(int i=0; i<n; ++i) {
            if(req.count(arr[i])) {
                req.erase(arr[i]);
                temp--;
            }
            if(!st.count(arr[i])) {
                st.insert(arr[i]);
                a.push_back(arr[i]);
                m = min(m, mp[arr[i]]);
            }
            if(temp == 0 && i < m) {
                count++;
                for(int x: a) {
                    st.erase(x);
                    req.insert(x);
                }
                temp = a.size();
                a.clear();
                m = n;
            }
        }
        cout << count + 1 << endl;
    }
    return 0; 
}