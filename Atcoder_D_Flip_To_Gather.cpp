#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int total = 0;
        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            if(s[i] == '1') {
                total++;
                arr[i] = 1;
            } else arr[i] = -1;
        }
        int temp = 0;
        int maxx = 0;
        for(int& it: arr) {
            temp = max(it, temp+it);
            maxx = max(maxx, temp);
        }
        int ans = total - maxx;
        cout << ans << endl;
    }
    return 0;
}