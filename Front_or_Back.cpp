#include <bits/stdc++.h>
#define int long long
#define endl '\n'
const int MOD = 998244353;
using namespace std;

int solve(vector<int>& A, int N) {
    vector<int> arr(N, 0);
    for(int& it: A) arr[it]++;
    int ans = 1;
    for(int i=0; i<=(N-1)/2; ++i) {
        int left = i;
        int right = N - 1 - i;
        if(left == right) {
            if(arr[left] > 1) return 0;
            continue;
        }
        int curr = arr[left] + arr[right];
        if(curr > 2) return 0;
        if(curr == 2) ans = (ans * 2) % MOD;
    }
    return ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int& it : A) cin >> it;
        cout << solve(A, N) << endl;
    }
    return 0;
}