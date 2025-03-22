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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> freq;
        for(int i=0; i<n; i++) {
            freq[s[i]]++;
        }
        if(freq.size() == 1) {
            cout << "NO" << endl;
            continue;
        }
        string ulta = s;
        reverse(ulta.begin(), ulta.end());
        if(s < ulta) {
            cout << "YES" << endl;
        } else {
            if(k >= 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}