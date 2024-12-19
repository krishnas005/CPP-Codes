#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T; 
    cin >> T;
    while(T--) {
        int N, M, K;
        cin >> N >> M >> K;
        int ans = INT_MAX; 
        for (int l=1; l<=N; ++l) {
            for (int w=1; w<=M; ++w) {
                int temp = 2*(l+w);
                int diff = abs(temp - K);
                ans = min(ans, diff);
            }
        }
        cout << ans << endl; 
    }
    return 0;
}
