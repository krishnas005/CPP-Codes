#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int> (m));
        int reqCount = 0;
        int totalSum = 0;
        int minVal = LLONG_MAX;
        for(int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) { 
                int a;
                cin >> a;
                arr[i][j] = a;
                totalSum += abs(a);
                minVal = min(minVal, abs(a));
                if(a <= 0) ++reqCount;
            }
        }
        if(reqCount % 2 == 0) {
            cout << totalSum << endl;
        }
        else cout << totalSum - (2*abs(minVal)) << endl; 
    }
    return 0;
}
