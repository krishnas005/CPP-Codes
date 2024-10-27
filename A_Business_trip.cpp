#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int k;
    cin >> k;
    vector<int> v(12);
    for(int i = 0; i < 12; ++i) cin >> v[i];
    if (k == 0) {
        cout << 0 << endl;
        return 0;
    }
    int totalGrowth = accumulate(v.begin(), v.end(), 0LL);
    if (totalGrowth < k) {
        cout << -1 << endl;
        return 0;
    }
    sort(v.rbegin(), v.rend());
    int sum = 0, months = 0;
    for (int i = 0; i < 12; ++i) {
        sum += v[i];
        months++;
        if (sum >= k) break;
    }
    cout << months << endl;
    return 0;
}
