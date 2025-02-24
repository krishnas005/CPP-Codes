#include <bits/stdc++.h>
using namespace std;
#define int long long
const int minn = 1e9;
const int maxx = 1e9;
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        int count = 0;
        int minnn = arr[0], maxxx = arr[0];
        for(int i=1; i<n; ++i) {
            if(arr[i] < minnn) minnn = arr[i];
            if(arr[i] > maxxx) maxxx = arr[i];
            if(maxxx - minnn > 2 * x) {
                count++;
                minnn = maxxx = arr[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}