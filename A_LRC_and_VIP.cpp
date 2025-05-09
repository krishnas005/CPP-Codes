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
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        auto maxx = max_element(arr.begin(), arr.end()) - arr.begin();
        auto minn = min_element(arr.begin(), arr.end()) - arr.begin();
        if(minn == maxx) cout << "No" << endl;
        else {
            cout << "Yes" << endl;
            for(int i=0; i<n; ++i) {
                if(i == maxx) cout << 1 << " ";
                else cout << 2 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}