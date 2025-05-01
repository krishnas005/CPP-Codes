#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        if(n == 1) {
            cout << -1 << endl;
        } else if(n % 2 == 0) {
            bool flag = true;
            for(int i=0; i<n; ++i) {
                if(flag) cout << -3 << " ";
                else cout << 3 << " ";
                flag = !flag;
            }
            cout << endl;
        } else {
            bool flag = true;
            for(int i=0; i<n-3; ++i) {
                if(flag) cout << 3 << " ";
                else cout << -3 << " ";
                flag = !flag;
            }
            cout << -3 << " 1 2" << endl;
        }
    }
    return 0;
}