#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n; 
        vector<int> p(n);
        for (int i=0; i<n; ++i) {
            cin >> p[i];
        }
        for(int i=1; i<n; ++i) {
            if(p[i-1]-p[i] == 1) swap(p[i-1], p[i]);
        }
        if(is_sorted(p.begin(), p.end())) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}