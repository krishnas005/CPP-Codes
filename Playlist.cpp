#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int start = 0;
    int end = 0;
    int ans = 0;
    unordered_map<int, int> mp;
    for(end=0; end<n; ++end) {
        if(mp.find(arr[end]) == mp.end()) {
            mp.insert({arr[end], end});
        }
        else {
            if(mp[arr[end]] >= start) {
                start = mp[arr[end]] + 1;
            }
            mp[arr[end]] = end;
        }
        ans = max(ans, end-start+1);
    }
    cout << ans << endl;
    return 0;
}