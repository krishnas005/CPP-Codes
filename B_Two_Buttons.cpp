#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int ans = 0;
    while(b > a) {
        if(b % 2 == 0) b /= 2;
        else ++b;
        ++ans;
    }
    cout << ans + (a - b) << endl;
    return 0;
}