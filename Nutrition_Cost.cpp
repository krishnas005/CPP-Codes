#include <bits/stdc++.h>
using namespace std;
#define int long long
#define maxx 1e9

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int N, C;
        cin >> N >> C;
        vector<int> A(N), B(N);
        for(int& it: A) cin >> it;
        for(int& it: B) cin >> it;
        vector<int> arr(N + 1, maxx);
        for(int i=0; i<N; i++) {
            int temp = A[i];
            int c    = B[i];
            arr[temp] = min(arr[temp], c);
        }
        int ans = 0;
        for(int& it: arr) {
            if(it < maxx) {
                int temp = C - it;
                if(temp > 0) ans += temp;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
