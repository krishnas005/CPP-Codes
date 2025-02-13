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
        string s;
        cin >> s;
        int count = 1;
        int curr = 1;
        for(int i=1; i<n; ++i) {
            if(s[i] != s[i-1]) curr = 1;
            else {
                ++curr;
                count = max(curr, count);
            }
        }
        cout << count + 1 << endl;
    }
    return 0;
}