#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char, int> freq;
        for (char& c : s) {
            freq[c]++;
        }
        char ch = 'a';
        int maxx = 0;
        for (auto& it : freq) {
            if (it.second > maxx) {
                ch = it.first;
                maxx = it.second;
            }
        }
        for (int i=0; i<n; i++) {
            if (s[i] != ch) {
                s[i] = ch;
                break;
            }
        }
        cout << s << endl;
    }
    return 0;
}