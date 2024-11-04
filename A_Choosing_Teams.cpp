#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i=0; i<n; ++i) cin >> arr[i];
    int count = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] + k <= 5) ++count;
    }
    cout << count / 3 << endl;
    return 0;
}