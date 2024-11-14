#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, m, k;
        cin >> n >> m >> k;
        if(m == 1) {
            cout << "No" << endl;
        }
        else {
            int temp = (n+(m-1))/(m);
            temp = n - temp;
            if(k >= temp) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
    }
    return 0;
}