#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int a, b, c;
        cin >> a >> b >> c;
        int _a = b - (c - b);
        if(_a >= a && _a % a == 0 && _a != 0) {
            cout << "YES" << endl;
            continue;
        }
        int _b = a + (c - a) / 2;
        if(_b >= b && (c-a) % 2 == 0 && _b % b == 0 && _b != 0) {
            cout << "YES" << endl;
            continue;;
        }
        int _c = a + 2 * (b - a);
        if(_c >= c && _c % c == 0 && _c != 0) {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}