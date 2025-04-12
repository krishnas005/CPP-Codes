#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int MOD = 1e9;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N, K;
    cin >> N >> K;
    vector<int> arr(N+1, 0);
    vector<int> prefix(N+1, 0);
    for(int i=0; i<K && i<=N; ++i) {
        arr[i] = 1;
        prefix[i] = (i == 0) ? 1 : (prefix[i-1] + arr[i]) % MOD;
    }
    for(int i=K; i<=N; ++i) {
        int sum = prefix[i-1];
        if(i-K-1 >= 0) {
            sum = (sum - prefix[i-K-1] + MOD) % MOD;
        }
        arr[i] = sum;
        prefix[i] = (prefix[i-1] + arr[i]) % MOD;
    }
    cout << arr[N] << endl;
    return 0;
}