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
        if(n%2 == 0) {
            for(int i=1, j=1; i<=n; i+=2, j++) {
                cout << j << " " << j << " ";
            } cout << endl;
        }
        else if(n < 27) {
            cout << "-1" << endl;
        }
        else {
            vector<int> ans = {1, 2, 2, 3, 3, 4, 4, 5, 5, 1, 6, 6, 7, 7, 12, 12, 11, 11, 10, 10, 9, 9, 13, 8, 8, 1, 13};
            int remaining = n-27;
            for(int i=1, j=14; i<=remaining; i+=2, j++) {
                ans.push_back(j);
                ans.push_back(j);
            } 
            for(int& i: ans) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}