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
        int k;
        cin >> k;
        if(k%2 == 0) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}