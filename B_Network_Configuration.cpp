#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int& it: arr) cin >> it;
    sort(rbegin(arr), rend(arr));
    int ans = 0;
    if(k == n) cout << arr.back() << endl;
    else cout << arr[k-1] << endl;
    return 0;
}