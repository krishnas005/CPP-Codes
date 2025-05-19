#include <bits/stdc++.h>
using namespace std;
#define int int
#define endl '\n'

int solve(int k) {
    if(k <= 1) return 0;
    int ans = 0;
    int p = 1;
    while(p < k) {
        p*= 2;
        ans++;
    }
    return ans;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        int x = min(a, n - a + 1);
        int y = min(b, m - b + 1);
        int c1 = solve(x) + solve(m);
        int c2 = solve(n) + solve(y);
        cout << 1 + min(c1, c2) << endl;
    }
    return 0;
}