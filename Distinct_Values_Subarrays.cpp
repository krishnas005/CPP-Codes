#include <bits/stdc++.h> 
using namespace std;
#define int long long

int solve(vector<int>& arr) {
    int n = arr.size();
    int i = 0, j = 0;
    unordered_map<int, int> mp;
    int ans = 0;
    while(j < n) {
        while(mp[arr[j]] > 0) {
            mp[arr[i]]--;
            i++;
        }
        mp[arr[j]]++;
        ans += (j - i + 1);
        ++j;
    }
    return ans;
}

int32_t main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& it: arr) cin >> it;
    cout << solve(arr);
    return 0;
}