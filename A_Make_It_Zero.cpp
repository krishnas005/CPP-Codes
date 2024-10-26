#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        for(int i=0; i<n; ++i) {
            int a;
            cin >> a;
        }
        if(n%2 == 0) {
            cout << "2" << endl;
            cout << "1 " << n << endl;
            cout << "1 " << n << endl;
        }
        else {
            cout << "4" << endl;
            cout << "1 " << n << endl;
            cout << "1 " << n-1 << endl;
            cout << n-1 << " " << n << endl;
            cout << n-1 << " " << n << endl;
        }
    }
    return 0;
}