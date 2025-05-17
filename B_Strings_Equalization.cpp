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
        string s, t;
        cin >> s >> t;
        if(s.size() != t.size()) {
            cout << "NO" << endl;
        } else {
            vector<char> freq(26);
            for(char c: s) {
                freq[c-'a']++;
            }
            bool flag = false;
            for(char c: t) {
                if(freq[c-'a'] > 0) {
                    flag = true;
                    break;
                }
            } 
            if(flag) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}