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
    while (T--) {
        int n, x, k;
        string s;
        cin >> n >> x >> k;
        cin >> s;
        vector<int> prefixx(n+1, 0);
        for(int i=1; i<=n; ++i) {
            prefixx[i] = prefixx[i-1] + (s[i-1] == 'L' ? -1 : 1);
        }
        int idx = -1;
        for(int i=1; i<=n; ++i) {
            if(x+prefixx[i] == 0) {
                idx = i;
                break;
            }
        }
        if(idx == -1 || idx > k) {
            cout << "0" << endl;
            continue;
        }
        int count = 1; 
        int temp = idx;
        int curr = -1;
        for(int i=1; i<=n; ++i) {
            if(prefixx[i] == 0) {
                curr = i;
                break;
            }
        }
        if(curr == -1) {
            cout << count << endl;
            continue;
        }
        count += (k-temp) / curr;
        cout << count << endl;
    }
    return 0;
}