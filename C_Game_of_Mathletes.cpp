#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; 
    cin >> T;
    while(T--) {
        int n, k; 
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        vector<int> freq(n+1, 0);
        for(int i=0; i<n; i++) {
            freq[arr[i]]++;
        }
        int turns = n / 2;
        int P = 0, X = 0;
        for(int x=1; x<=n; x++) {
            int y = k - x;
            if(y < 1 || y > n) {
                X += freq[x];
            }
        }
        int low = max(1LL, k - n);
        int high = min(n, k - 1);
        for(int x=low; x<=high; x++) {
            int y = k - x;
            if(y >= 1 && y <= n && x < y) {
                int common = min(freq[x], freq[y]);
                P += common;
                X += abs(freq[x] - freq[y]);
            }
        }
        if(k % 2 == 0) {
            int mid = k / 2;
            if(mid >= 1 && mid <= n) {
                P += freq[mid] / 2;
                X += freq[mid] % 2;
            }
        }
        int safeTurns = (X + 1) / 2;
        int dangerousTurns = max(0LL, turns - safeTurns);
        int ans = min(P, dangerousTurns);
        cout << ans << endl;
    }
    return 0;
}
