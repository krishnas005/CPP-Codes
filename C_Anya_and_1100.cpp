#include <bits/stdc++.h>
using namespace std;
#define int long long

bool has_match (vector<int>& matches) {
    return any_of(matches.begin(), matches.end(), [](int x) { return x == 1; });
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int q;
        cin >> q;
        int n = s.size();
        vector<int> matches(n, 0);
        for (int i = 0; i + 3 < n; ++i) {
            if (s.substr(i, 4) == "1100") matches[i] = 1;
        }
        while (q--) {
            int i, v;
            cin >> i >> v;
            --i; 
            s[i] = (v == 0 ? '0' : '1');

            for (int j = max(0LL, i - 3); j <= i && j + 3 < n; ++j) {
                matches[j] = (s.substr(j, 4) == "1100");
            }
            cout << (has_match(matches) ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}
