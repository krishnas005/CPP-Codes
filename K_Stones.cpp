#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i=0; i<N; ++i) cin >> A[i];
    vector<bool> dp(K+1, false);  
    for(int i=1; i<=K; ++i) {
        for(int& x : A) {
            if(x<=i && !dp[i-x]) {
                dp[i] = true;
                break;
            }
        }
    }
    cout << (dp[K] ? "First" : "Second") << endl;
    return 0;
}