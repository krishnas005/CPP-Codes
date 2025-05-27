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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0;
        for(auto c: s) {
            if(c == '0') ++cnt;
        }
        int temp = n / 2;
        bool flag = ((cnt - temp + k) % 2 == 0);
        if(llabs(cnt - temp) <= k && k <= temp && flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}