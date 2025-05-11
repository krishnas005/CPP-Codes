#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N, M;
    cin >> N >> M;
    vector<int> arr(M);
    for(int& it: arr) cin >> it;
    sort(begin(arr), end(arr));
    int ans = INT_MAX;
    for(int i=0; i<=M-N; ++i) {
        ans = min(arr[i+N-1] - arr[i], ans);
    }
    cout << ans << endl;
    return 0;
}