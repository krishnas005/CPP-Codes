#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >> N;
    vector<string> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    bool flag = false;
    int ans = 0;
    for(auto& op : arr) {
        if (op == "login") {
            flag = true; 
        } else if (op == "logout") {
            flag = false; 
        } else if (op == "private") {
            if (!flag) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}