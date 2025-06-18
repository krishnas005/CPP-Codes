#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        bool flag = false;
        map<char, int> freq;
        for(auto& c : s) {
            freq[c]++;
        }
        for(auto& it: freq) {
            if(it.second > 1) {
                if(it.second == 2 && it.first == s[0] && s.back() == it.first) continue;
                else {
                    flag = true;
                    break;
                }
            }
        }
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}