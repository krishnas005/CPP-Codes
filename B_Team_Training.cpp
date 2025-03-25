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
    while(T--){
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        sort(arr.rbegin(), arr.rend());
        int ans = 0;
        int currSize = 0;
        for(int i=0; i<n; i++){
            currSize++; 
            if(arr[i]*currSize >= x) {
                ans++;   
                currSize = 0;
            }
        }
        cout << ans << endl;
    }    
    return 0;
}