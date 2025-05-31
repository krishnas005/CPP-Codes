#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<int> arr(N+2, 0);
    for(int i=0; i<M; ++i) {
        int L, R;
        cin >> L >> R;
        arr[L] += 1;
        arr[R + 1] -= 1;
    }
    vector<int> guard(N + 1, 0);
    for(int i=1; i<=N; ++i) {
        guard[i] = guard[i-1] + arr[i];
    }
    int ans = INT_MAX;
    for(int i=1; i<=N; ++i) {
        ans = min(ans, guard[i]);
    }
    cout << ans << endl;
    return 0;
}