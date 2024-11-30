#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        int count = 0;
        int currCount = 1;
        for(int i=1; i<n; ++i) {
            if(a[i]%2 == a[i-1]%2) {
                ++currCount;
            } else {
                count += (currCount - 1);
                currCount = 1;
            }
        }
        if(currCount > 1) {
            count += (currCount - 1);
        }
        cout << count << endl;
    }
    return 0;
}