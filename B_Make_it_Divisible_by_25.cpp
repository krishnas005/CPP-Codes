#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        int n = s.size();
        int ans = INT_MAX;
        vector<string>temp = {"00", "25", "50", "75"};
        for(auto it: temp) {
            int pos = -1;
            for(int i=n-1; i>=0; --i) {
                if(s[i] == it[1]) {
                    for(int j=i-1; j>=0; --j) {
                        if(s[j] == it[0]) {
                            int tempo = (n - i - 1) + (i - j - 1);
                            ans = min(ans, tempo);
                            break;
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}