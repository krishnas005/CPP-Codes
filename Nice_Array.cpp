#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for(int i=0; i<N; i++) cin >> A[i];
        int flooor = 0, ceill = 0;
        for(int& it : A) {
            int floor_val = floor((double)it / K);
            int ceil_val = ceil((double)it / K);
            flooor += floor_val;
            ceill += ceil_val;
        }
        if(flooor == 0 || ceill == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}