#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        vector<pair<int, vector<int>>> nums(n);
        for(int i=0; i<n; ++i) {
            int currSum = 0;
            vector<int> temp(m);
            for(int j=0; j<m; ++j) {
                cin >> temp[j];
                currSum += temp[j];
            }
            nums[i] = make_pair(currSum, temp);
        }
        sort(nums.rbegin(), nums.rend());
        int ans = 0;
        int prefixSum = 0;
        for(auto& it: nums) {
            for(auto& i: it.second) {
                prefixSum += i;
                ans += prefixSum;
            }
        }
        cout << ans << endl;
    }
    return 0;
}