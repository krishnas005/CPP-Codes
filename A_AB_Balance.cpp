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
        s[0] = s[n-1];
        cout << s << endl;
    }
    return 0;
}