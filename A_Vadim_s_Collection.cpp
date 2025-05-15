#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        multiset<int> digits;
        for(char ch : s) digits.insert(ch - '0');
        string ans = "";
        for(int i=0; i<10; ++i) {
            int min_required = 9 - i;
            auto it = digits.lower_bound(min_required);
            ans += to_string(*it);
            digits.erase(it);
        }
        cout << ans << endl;
    }
    return 0;
}