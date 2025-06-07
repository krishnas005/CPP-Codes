#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    string s, t;
    cin >> s >> t;
    bool flag = 0;
    for(int i=0; i<n; ++i) {
        if(s[i] == 'o' && t[i] == 'o') {
            flag = true;
            break;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}