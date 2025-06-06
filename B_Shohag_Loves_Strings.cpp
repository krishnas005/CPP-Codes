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
        string s;
        cin >> s;
        int n = s.size();
        if(n == 1) {
            cout << -1 << endl;
            continue;
        }
        if(n == 2) {
            if(s[0] == s[1]) cout << s << endl;
            else cout << -1 << endl;
            continue;
        } 
        bool flag = false;
        for(int i=0; i<n-1; ++i) {
            if(s[i] == s[i+1]) {
                cout << s[i] << s[i+1] << endl;
                flag = true;
                break;
            }
            if(i + 2 < n) {
                if(s[i] != s[i+1] && s[i+1] != s[i+2] && s[i] != s[i+2]) {
                    cout << s[i] << s[i+1] << s[i+2] << endl;
                    flag = true;
                    break;
                }
            }
        }
        if(!flag) cout << -1 << endl;
    }
    return 0;
}