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
        vector<int> a(n);
        for(int& it: a) cin >> it;
        int ans = 0;
        vector<int> arr;
        arr.push_back(a[0]); 
        for(int i=1; i<n; ++i) {
            if(a[i] != a[i-1]) {
                arr.push_back(a[i]);
            }
        }
        n = arr.size();
        vector<pair<int, int>> array(n);
        for(int i=0; i<n; ++i) {
            array[i] = {arr[i], i};
        }
        vector<bool> vis(n, 0);
        sort(array.rbegin(), array.rend());
        for(int i=0; i<n; ++i) {
            int idx = array[i].second;
            if(idx > 0 && vis[idx-1]) {
                vis[idx] = true;
            }
            else if(idx < n-1 && vis[idx+1]) {
                vis[idx] = true;
            } else {
                vis[idx] = true;
                ++ans;
            }
        }
        cout << ans << endl;
    }
    return 0;
}