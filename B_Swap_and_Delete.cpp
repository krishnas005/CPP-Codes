#include <bits/stdc++.h>
using namespace std;
#define int long long
const int minn = 1e9;
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        int n = s.size();
        int zero = 0, one = 0;
        for(int i=0; i<n; ++i) {
            if(s[i] == '0') zero++;
            else one++;
        }
        int temp = 0;
        for(int i=0; i<n; ++i) {
            if(s[i] == '0' && one > 0) {
                temp++;
                one--;
            } else if(s[i] == '1' && zero > 0) {
                zero--;
                temp++;
            } else break;
        }
        cout << n - temp << endl;
    }
    return 0;
}