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
    while(T--) {
        int n;
        cin >> n;
        int m = 2 * n;
        vector<int> arr(m+ 1, 0);
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                int curr;
                cin >> curr;
                int req = i + j;  
                if(arr[req] == 0) arr[req] = curr;
            }
        }
        set<int> st;
        for(int i=2; i<=m; i++){
            st.insert(arr[i]);
        }
        int ans = 0;
        for(int i=1; i<=2*n; i++){
            if(st.find(i) == st.end()){
                ans = i;
                break;
            }
        }
        cout << ans << " ";
        for(int i=2; i<=m; i++) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}