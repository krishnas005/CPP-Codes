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
        map<char, int> mp;
        int maxx = 0;
        for(auto& ch: s) {
            mp[ch]++;
            maxx = max(maxx, mp[ch]);
        }
        if(maxx > n / 2) {
            cout << 2 * maxx - n << endl; 
        } else {
            cout << n % 2 << endl;
        }
    }
    return 0;
}