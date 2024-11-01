#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--){
        int n, a, b;
        cin >> n >> a >> b;
        if(a*2 <= b) {
            cout << n*a << endl;
        }
        else {
            if(n%2 == 0) cout << (n/2)*b << endl;
            else cout << (n/2)*b + a << endl;
        }
    }
    return 0;
}