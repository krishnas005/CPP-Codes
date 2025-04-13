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
    while (T--) {
        int n;
        cin >> n;
        vector<int> p(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> p[i];
        }
        string s;
        cin >> s;
        vector<bool> visited(n + 1, false);
        vector<int> ans(n + 1);
        for (int i = 1; i <= n; ++i) {
            if (!visited[i]) {
                vector<int> cycle;
                int curr = i;
                while (!visited[curr]) {
                    visited[curr] = true;
                    cycle.push_back(curr);
                    curr = p[curr];
                }
                int blackCount = 0;
                for (int x : cycle) {
                    if (s[p[x] - 1] == '0') {
                        blackCount++;
                    }
                }
                for (int x : cycle) {
                    ans[x] = blackCount;
                }
            }
        }

        for (int i = 1; i <= n; ++i) cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}
