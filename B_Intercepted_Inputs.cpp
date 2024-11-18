#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T; 
    while (T--) {
        int k;
        cin >> k;
        vector<int> a(k);
        for (int i=0; i<k; i++) {
            cin >> a[i];
        }
        map<int, int> mp; 
        int req = k-2; // k = m*n + 2(n, m)
        for(int i=0; i<k; ++i) {
            if(req%a[i] == 0 && mp[req/a[i]] > 0) {
                cout << a[i] << " " << req/a[i] << endl;
                break;
            }
            mp[a[i]]++;
        }
    }
    return 0;
}
