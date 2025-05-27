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
        int n = stoi(s);
        int x = (int)(sqrt(n) + 0.5);
        if(x * x != n) {
            cout << -1 << endl;
        } else {
            cout << 0 << " " << x << endl;
        }
    }
    return 0;
}