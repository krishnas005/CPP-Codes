#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int& i: a) cin >> i;
        int flag = 0;
        bool count = false;
        for(int i=0; i<n; ++i) {
            if(a[i] == 0) {
                count = false;
            } else if(!count) {
                ++flag; 
                count = 1;
            }
        }
        if(flag == 0) cout << 0 << endl;
        else if(flag == 1) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}