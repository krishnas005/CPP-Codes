#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    int T;
    cin >> T;
    while(T--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a(n);        
        for(int i=0; i<n; i++) {
            int x = 0;
            cin >> x;
            x %= k;
            if(x == 0) x = k;
            a[i] = {x,-i};
        }
        sort(a.begin(), a.end(), greater<>());
        for(auto &it : a) cout << -it.second + 1 << ' '; 
        cout << endl;
    }
    return 0;
}