#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N; 
        vector<int> A(N);
        for(int& i: A) cin >> i;
        map<int, int> mp;
        int ans = 0;
        for(int i=0; i<N; ++i) {
            mp[A[i]] = max(mp[A[i]], i+1); 
        }
        for(auto& it : mp) {
            ans += it.second; 
        }
        cout << ans << endl;
    }
    return 0;
}