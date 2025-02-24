#include <bits/stdc++.h>
using namespace std;
#define int long long
const int minn = 1e9;
const int maxx = 1e9;
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        string s, t;
        cin >> s;
        cin >> t;
        int n1 = s.size(), n2 = t.size();
        if(n1 < n2) {
            cout << "NO" << endl;
            continue;
        }
        int i = 0;
        int j = 0;
        while(i < n1 && j < n2) {
            if(s[i] == t[j]) {
                ++i;
                ++j;
            } else if(s[i] == '?') {
                s[i] = t[j];
                ++i;
                ++j;
            } else ++i;
        }
        for(int i=0; i<n1; ++i) {
            if(s[i] == '?') s[i] = 'a';
        }
        if(j == n2) {
            cout << "YES" << endl;
            cout << s << endl;
        } else cout << "NO" << endl;
    }
    return 0;
}