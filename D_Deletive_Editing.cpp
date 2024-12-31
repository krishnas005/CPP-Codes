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
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
        vector<int> freq(26, 0);
        for(int i=0; i<m; i++) freq[t[i] - 'A']++;
        for(int i=n-1; i>=0; i--) {
            if(freq[s[i] - 'A'] > 0) freq[s[i] - 'A']--;
            else s[i] = '@';
        }
        string temp = "";
        for (int i = 0; i < n; i++) {
            if (s[i] != '@') temp += s[i];
        }
        if(temp == t) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}