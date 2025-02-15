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
        int n, p;
        cin >> n >> p;
        vector<pair<int, int>> arr(n);
        vector<int> A(n), B(n);
        for(int& it: A) cin >> it;
        for(int& it: B) cin >> it;
        arr.push_back({p, n+1});
        for(int i=0; i<n; ++i) arr.push_back({B[i], A[i]});
        sort(arr.begin(), arr.end());
        int total = 1;
        int cost = p;
        int idx = 0;
        while(total < n) {
            int left = n - total;
            if(arr[idx].second <= left) {
                total += arr[idx].second;
                cost = cost + arr[idx].first * 1LL * arr[idx].second;
            } else {
                total = n;
                cost = cost + left * 1LL * arr[idx].first;
            }
            ++idx;
        }
        cout << cost << endl;
    }
    return 0;
}