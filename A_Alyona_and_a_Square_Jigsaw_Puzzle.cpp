#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        for(int& i: a) cin >> i;
        int currLayer = 0;
        int currCount = 1;
        int currSum = 0;
        int count = 0;
        for(int i=0; i<n; ++i) {
            currSum += a[i];
            while(currSum >= currCount) {
                currSum -= currCount;
                ++currLayer;
                currCount = 8*currLayer; 
            }
            if(currSum == 0) {
                ++count;
            }
        }
        cout << count << endl;
    }
    return 0;
}