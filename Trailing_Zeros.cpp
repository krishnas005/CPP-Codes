#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n;
    cin >> n;
    int ans = 0;
    for(int i=5; n/i>0; i*=5) {
        ans += n/i; 
    }
    cout << ans << endl;
    return 0;
}