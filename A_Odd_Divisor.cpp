#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        if((n&(n-1)) == 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}