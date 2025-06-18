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
        vector<int> a(n), b(n);
        for(int& it: a) cin >> it;
        for(int& it: b) cin >> it;
        vector<pair<int, int>> ops;
        for(int i=0; i<n; ++i) {
            if(a[i] > b[i]) {
                ops.push_back({3, i+1});
                swap(a[i], b[i]);
            }
        }
        for(int i=0; i<n; ++i) {
            for(int j=0; j <n-i-1; ++j) {
                if(a[j] > a[j+1]) {
                    ops.push_back({1, j+1});
                    swap(a[j], a[j+1]);
                }
            }
        }
        for(int i=0; i<n; ++i) {
            for(int j=0; j<n-i-1; ++j) {
                if(b[j] > b[j+1]) {
                    ops.push_back({2, j+1});
                    swap(b[j], b[j+1]);
                }
            }
        }
        cout << ops.size() << endl;
        for(auto& it: ops) {
            cout << it.first << " " << it.second << endl;
        }
    }
    return 0;
}