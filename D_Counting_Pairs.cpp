#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(vector<int>& arr, int limit) {
    int n = arr.size();
    int count = 0;
    int j = n - 1;
    for(int i=0; i<n; ++i) {
        while(i<j && arr[i]+arr[j] > limit) --j;
        if(i < j) count += (j - i);
    }
    return count;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        sort(begin(arr), end(arr));
        int sum = accumulate(begin(arr), end(arr), 0LL);
        // sum - y <= pairs <= sum - x
        int low = sum - y;
        int high = sum - x;
        int ans = solve(arr, high) - solve(arr, low - 1);
        cout << ans << endl;
    }
    return 0;
}