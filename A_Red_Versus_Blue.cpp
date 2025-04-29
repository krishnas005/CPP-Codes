#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, r, b;
        cin >> n >> r >>b;
        int maxx = (r / (b+1));
        int extra = (r % (b+1));
        string s = "";
        for(int i=1; i<=b+1; ++i) {
            for(int j=0; j<maxx; ++j) {
                s += 'R';
            }
            if(extra) {
                s += 'R';
                --extra;
            }
            s += 'B';
        }
        s.pop_back();
        cout << s << endl;
    }
    return 0;
}