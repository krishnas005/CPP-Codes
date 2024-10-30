#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(c%2 == 0) {
            if(a > b) cout << "First" << endl;
            else cout << "Second" << endl;
        }
        else {
            if(b > a) cout << "Second" << endl;
            else cout << "First" << endl;
        }
    }
    return 0;
}
