#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    int i = 0;
    int j = n - 1;
    bool flag = false;
    bool ans = true;
    while(i < j) {
        if(s[i] != s[j]) {
            if(flag) {
                ans = false;
                break;
            } else {
                flag = true;
            }
        }
        ++i; --j;
    }
    if(ans && flag) cout << "YES" << endl;
    else if(ans && (n&1)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}