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
    double sum = 0;
    for(int i=0; i<n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum / n >= 4.5) {
        cout << 0 << endl;
        return 0;
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    for(int i=0; i<n; ++i) {
        sum += (5 - arr[i]); 
        ans++;
        if(sum / n >= 4.5) break;
    }
    cout << ans << endl;
    return 0;
}