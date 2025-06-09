#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        int temp = a[1] - a[0];
        bool flag = true;
        for(int i=1; i<n-1; ++i) {
            if(a[i+1] - a[i] != temp) {
                flag = false;
                break;
            }
        }
        if(flag) {
            int num = a[0] - temp;
            if(num >= 0 && num % (n+1) == 0) {
                int tempp = (num / (n+1)) + temp;
                if(tempp >= 0) {
                    cout << "YES" << endl;
                    continue;
                }
            }
        }
        cout << "NO" << endl;
    }
    return 0;
}