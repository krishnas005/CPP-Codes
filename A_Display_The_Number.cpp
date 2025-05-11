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
        int n;
        cin >> n;
        if(n%2 == 0) {
            for(int i=0; i<(n/2); ++i) cout << 1;
        } else {
            cout << 7;
            for(int i=0; i<((n-3)/2); ++i) cout << 1;
        }
        cout << endl;
    }
    return 0;
}