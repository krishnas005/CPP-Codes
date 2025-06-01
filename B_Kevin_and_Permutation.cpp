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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n, 0);
        int cnt = 1;
        int s = k-1;
        for(int i=s; i<n; i += k){
            arr[i] = cnt++;
        }
        for(int i=0; i<n ;i++){
            if(arr[i] == 0) arr[i] = cnt++;
        }
        for(int& it: arr) cout << it << " ";
        cout << endl;
    }
    return 0;
}