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
        if(n == 2) {
            cout << "NO" << endl;
            continue;
        }
        int cnt = 0;
        int temp = 0;
        for(char ch: s) {
            if(ch == '(') ++temp;
            else --temp;
            if(temp == 0) ++cnt;
        }
        if(cnt > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}