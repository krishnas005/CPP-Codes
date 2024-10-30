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
    int currCount = 0;
    for(int i=1; i<n; ++i) {
        if(arr[i] >= arr[i-1]) {
            ++currCount;
        }
        else {
            ans = max(ans, currCount);
            currCount = 0;
        }
    }
    ans = max(ans, currCount);
    cout << ans + 1 << endl;
    return 0;
}