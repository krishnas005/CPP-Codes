#include <bits/stdc++.h>
using namespace std;
#define int long long
const int minn = 1e9;
const int maxx = 1e9;
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> freq(26);
        for(int i=0; i<n; ++i) {
            freq[s[i]-'a']++;
        }
        int oddCount = 0;
        for(int i=0; i<26; ++i) {
            if(freq[i]&1) ++oddCount;
        }
        oddCount -= k;
        if(oddCount > 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}