#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> arr(n);
    for(int i=0; i<n; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.first < b.first || (a.first == b.first && a.second > b.second);
    });
    int i = 0;
    for(i=0; i<n; ++i) {
        if(arr[i].first >= s) {
            cout << "NO" << endl;
            return 0;
        }
        else s += arr[i].second;
    }
    cout << "YES" << endl;
    return 0;
}