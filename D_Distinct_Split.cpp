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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        for(auto& it: s) freq1[it - 'a']++;
        int count = 0;
        for(auto& it: s) {
            --freq1[it - 'a'];
            ++freq2[it - 'a'];
            int curr = 0;
            for(int i=0; i<26; ++i) {
                curr += min(1LL, freq1[i]) + min(1LL, freq2[i]);
            }
            count = max(count, curr);
        }
        cout << count << endl;
    }
    return 0;
}