#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int alreadyFixedPoints = 0;
        for(int i=0; i<n; ++i) {
            int a;
            cin >> a;
            if(a == i + 1) ++alreadyFixedPoints;
        }
        int ans = 0;
        if(alreadyFixedPoints == n) ans = n;
        else if(alreadyFixedPoints >= 1) ans = n-1;
        else ans = n-2;
        cout << ans << endl;
    }
    return 0;
}