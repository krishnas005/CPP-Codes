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
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        for(int i=0; i<s.size(); ++i) {
            if(s[i] == 'p') s[i] = 'q';
            else if(s[i] == 'q') s[i] = 'p';
        }
        cout << s << endl;
    }
    return 0;
}