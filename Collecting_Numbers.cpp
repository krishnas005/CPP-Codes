#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i=0; i<n; ++i) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());
    int temp = -1;
    int ans = 1;
    for(int i=0; i<n; ++i) {
        if(arr[i].second < temp) {
            ++ans;
        }
        temp = arr[i].second;
    }
    cout << ans << endl;
    return 0;
}