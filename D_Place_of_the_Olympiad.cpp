#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool solve(int curr, int n, int m, int k) {
    m = m + 1;
    int val = (curr * m) / (curr + 1);
    return (n * val >= k);  
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--){
        int n, m, k;
        cin >> n >> m >> k;
        int start = 1;
        int end = m;
        int ans = m;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(solve(mid, n, m, k)){
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}