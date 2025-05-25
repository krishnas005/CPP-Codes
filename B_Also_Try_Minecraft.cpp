#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int& it: a) cin >> it;
    vector<int> l(n, 0), r(n, 0);
    for(int i=0; i<n-1; i++) {
        l[i+1] = max(0LL, a[i] - a[i+1]);
    }
    for(int i=1; i<n; i++) {
        r[i] = max(0LL, a[i] - a[i-1]);
    }
    for(int i=1; i<n; i++) {
        l[i] += l[i-1];
        r[i] += r[i-1];
    }
    for(int i=0; i<m; i++) {
        int s, t;
        cin >> s >> t;
        s--; 
        t--;
        if(s < t) {
            cout << l[t] - l[s] << endl;
        } else {
            cout << r[s] - r[t] << endl;
        }
    }
    return 0;
}