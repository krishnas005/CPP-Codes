#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i) cin >> arr[i];
    int ans = 0;
    int totalSum = accumulate(arr.begin(), arr.end(), 0);
    sort(arr.begin(), arr.end());
    int sum = 0;
    for(int i=n-1; i>=0; --i) {
        sum += arr[i];
        if(sum > totalSum-sum) {
            ans = n - i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}