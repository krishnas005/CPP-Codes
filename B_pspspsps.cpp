#include <bits/stdc++.h>
using namespace std;
#define int long long
#define maxxx 1e9

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> rightt(n+1, n+1), leftt(n+1, 0);
        for(int i=n-1; i>=0; --i) {
            rightt[i] = (s[i] == 'p') ? i : rightt[i+1];
        }
        for(int i=1; i<=n; ++i) {
            leftt[i] = (s[i-1] == 's') ? i : leftt[i-1];
        }
        vector<int> maxx(n);
        for(int i=0; i<n; ++i) {
            int pLimit = rightt[i] < n ? rightt[i]+1 : maxxx;
            int sLimit = leftt[i+1] > 0 ? n-leftt[i+1]+1 : maxxx;
            maxx[i] = min(pLimit, sLimit);
            if(maxx[i] == maxxx) maxx[i] = n+1;
        }
        sort(maxx.begin(), maxx.end());
        bool flag = true;
        for(int i=0; i<n; ++i) {
            if(maxx[i] < i+1) {
                flag = false;
                break;
            }
        }
        if(!flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}