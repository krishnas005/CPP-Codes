#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        int X;
        cin >> N >> X;
        vector<int> A(N), B(N);
        vector<pair<int, pair<int, int>>> coins;
        for(int i = 0; i < N; ++i) cin >> A[i];
        for(int i = 0; i < N; ++i) cin >> B[i];
        for(int i = 0; i < N; ++i) {
            coins.push_back({(int)A[i] * B[i], {A[i], B[i]}});
        }
        sort(coins.rbegin(), coins.rend());
        int sum = 0;
        int ans = 0;
        set<int> st;
        for(auto& it: coins) {
            if(sum >= X) break;
            int val = it.second.first;
            int count = it.second.second;
            if(st.count(count)) continue;
            st.insert(count);
            sum += val * count;
            ++ans;
        }
        if(sum >= X) cout << ans << endl;
        else cout << -1 << endl;
    }
    return 0;
}