#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& it: arr) cin >> it;
    vector<int> ans;
    ans.push_back(arr[0]);
    for(int& it: arr) {
        if(it > ans.back()) ans.push_back(it);
        else {
            auto idx = lower_bound(begin(ans), end(ans), it) - ans.begin();
            ans[idx] = it;
        }
    }
    cout << ans.size();
    return 0;
}