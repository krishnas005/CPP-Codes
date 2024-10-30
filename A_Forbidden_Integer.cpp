#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, k, x;
        cin >> n >> k >> x;
        if(x != 1) {
            cout << "YES" << endl;
            cout << n << endl;
            for(int i=0; i<k; ++i) {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else if(k==1 || (k==2 && n%2==1)) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            vector<int> values;
            values.push_back((n % 2 == 1) ? 3 : 2); 
            values.insert(values.end(), (n / 2 - 1), 2); 
            for (int value : values) {
                cout << value << " "; 
            }
            cout << endl; 
        }
    }
    return 0;
}