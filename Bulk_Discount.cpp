#include <bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> arr(N); 
        for (int &i : arr) {
            cin >> i; 
        }
        int currRed = 0; 
        int ans = 0; 
        sort(arr.begin(), arr.end());
        for (int i = 0; i < N; ++i) {
            arr[i] = max(0LL, arr[i] - currRed); 
            ++currRed;
            ans += arr[i]; 
        }
        cout << ans << endl; 
    }
    return 0;
}