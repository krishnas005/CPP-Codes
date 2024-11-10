#include <bits/stdc++.h>
using namespace std;
#define int long long

void CodeKannu06(int n, int b, int c) {
    if(n <= c) {
        cout << n << endl;
        return;
    }
    if(b==0) {
        if(c < n-2) {
            cout << -1 << endl;
            return;
        }
        else {
            cout << n-1 << endl;
            return;
        }
    }
    else {
        int ans = n-((n-c+b-1)/b);
        cout << max(ans, 0LL) << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, b, c;
        cin >> n >> b >> c;
        CodeKannu06(n, b, c);
    }
    return 0;
}
