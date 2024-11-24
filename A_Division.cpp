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
        int x;
        cin >> x;
        if(x >= 1900) {
            cout << "Division 1" << endl;
        } else if(1600 <= x && x <= 1899) {
            cout << "Division 2" << endl;
        } else if(1400 <= x && x <= 1599) {
            cout << "Division 3" << endl;
        } else if(x <= 1399){
            cout << "Division 4" << endl;
        }
    }
    return 0;
}