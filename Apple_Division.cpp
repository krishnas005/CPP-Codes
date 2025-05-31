#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& w: arr) cin >> w;
    int sum = accumulate(arr.begin(), arr.end(), 0LL);
    int maxSum = sum / 2;
    vector<bool> dp(maxSum+1, 0);
    dp[0] = 1;
    for(int& w: arr) {
        for(int s=maxSum; s>=w; --s) {
            dp[s] = dp[s] || dp[s-w];
        }
    }
    for(int s=maxSum; s>=0; --s) {
        if(dp[s]) {
            cout << abs(sum-2*s) << endl;
            return 0;
        }
    }
    return 0;
}