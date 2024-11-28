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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int emptyCount = 0;
        for(auto& i: s) {
            if(i == '.') {
                emptyCount++;
            }
        }
        if(s.find("...") != string::npos) cout << 2 << endl;
        else cout << emptyCount << endl;
    }
    return 0;
}