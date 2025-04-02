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
        int N;
        cin >> N;
        vector<int> arr(N);
        for(int i=0; i<N; i++){
            cin >> arr[i];
        }
        if(N == 1){
            cout << arr[0] << endl;
            continue;
        }
        int evennn = (N - 1) / 2; 
        int oddd   = (evennn > 0 ? evennn - 1 : 0);
        int ans = 0;
        for(int i=0; i<N; i++){
            if(i % 2 == 0) ans = max(ans, arr[i] + evennn);
            else ans = max(ans, arr[i] + oddd);
        }
        cout << ans << endl;
    }
    return 0;
}