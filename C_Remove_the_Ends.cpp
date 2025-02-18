#include <bits/stdc++.h>
using namespace std;
#define int long long
const int minn = 1e9;
const int maxx = 1e9;
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        vector<int> pre(n+1);
        pre[0] = 0; 
        for(int i=0; i<n; i++) {
            pre[i+1] = pre[i]; 
            if(arr[i] > 0) {  
                pre[i+1] += arr[i];  
            }
        }
        vector<int> suff(n+1);
        suff[n] = 0; 
        for(int i=n-1; i>=0; i--) {
            suff[i] = suff[i+1]; 
            if(arr[i] < 0) { 
                suff[i] += (-arr[i]); 
            }
        }
        int ans = 0;
        for(int i=0; i<=n; i++) {
            int temp = pre[i] + suff[i];
            if(temp > ans) {
                ans = temp;
            }
        }
        cout << ans << endl;
    }
    return 0;
}