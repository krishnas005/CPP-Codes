#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void fastt() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int32_t main() {
    fastt();
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& it: arr) cin >> it;
    int ans = 0;
    int negOne = 0, zeroes = 0;
    for(int i=0; i<n; ++i) {
        if(arr[i] > 1) ans += arr[i] - 1; // make 1
        else if(arr[i] < -1) {
            ans += -1 - arr[i]; // make -1
            ++negOne;
        } else if(arr[i] == 0) {
            ++ans; // make 1 or -1
            ++zeroes;
        } else if(arr[i] == -1) {
            ++negOne;
        }
    }
    if((negOne&1) && zeroes == 0) ans += 2;
    cout << ans << endl;
    return 0;
}