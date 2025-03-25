#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    vector<int> date = {3, 1, 2, 1, 0, 1, 0, 0, 0, 0};
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        vector<int> freq(10, 0);
        int ans = 0;
        for(int i=0; i<n; i++) {
            freq[arr[i]]++;
            bool flag = true;
            for(int j=0; j<10; j++) {
                if(freq[j] < date[j]) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                ans = i+1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}