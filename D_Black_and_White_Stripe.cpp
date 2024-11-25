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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count = 0;
        int currCount = 0;
        for(int i=0; i<k; ++i) {
            if(s[i] == 'W') {
                ++currCount; 
            }
        }
        count = currCount;
        for(int i=k; i<n; ++i) {
            if(s[i-k] == 'W') {
                --currCount;
            }
            if(s[i] == 'W') {
                ++currCount;
            }
            count = min(count, currCount);
        }
        cout << count << endl;
    }
    return 0;
}