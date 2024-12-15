#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        for (int i=0; i<n; i++) {
            cin >> s[i];
        }
        int currLen = 0;
        int ans = 0;
        for (int i=0; i<n; i++) {
            if (currLen+s[i].length() <= m) {
                currLen += s[i].length();
                ans++;
            } else break;
        }
        cout << ans << endl;
    }
    return 0;
}
