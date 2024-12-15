#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int& it: a) cin >> it;
        vector<bool> visited(300011, false); 
        vector<int> ans(n);               
        int notUsed = 1;              
        for(int i=0; i<n; ++i) {
            if(!visited[a[i]]) {
                ans[i] = a[i];           
                visited[a[i]] = true;      
            } else {
                while(visited[notUsed]) {
                    ++notUsed; 
                }
                ans[i] = notUsed;     
                visited[notUsed] = true; 
            }
        }
        for(int& i: ans) cout << i << " ";
        cout << endl;
    } 
    return 0;
}