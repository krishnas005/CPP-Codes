#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mp;
        for(int i=0; i<n; ++i) {
            int a;
            cin >> a;
            arr[i] = a;
            mp[a]++;
        }
        int mex = 0;
        for(int i=0; i<=n; ++i) {
            if(mp[i] == 0) {
                mex = i;
                break;
            }
        }
        int firstOneOccur = 0;
        int secondOneOccur = 0;
        for(int i=0;i<=n;i++){
            if(mp[i]==1){
                firstOneOccur=i;
                break;
            }
        }
        for(int i=firstOneOccur+1;i<=n;i++){
            if(mp[i]<=1){
                secondOneOccur=i;
                break;
            }
        }  
        int ans = min(mex, secondOneOccur);
        cout << ans << endl;
    }
    return 0;
}