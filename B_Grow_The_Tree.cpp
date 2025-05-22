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
    sort(arr.begin(), arr.end());
    int x = 0, y = 0;
    for(int i=0; i<n/2; ++i) {
        x += arr[i];
    }
    for(int i=n/2; i<n; ++i) {
        y += arr[i];
    }
    cout << x * x + y * y << endl;
    return 0;
}