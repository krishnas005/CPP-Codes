#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int n, int k, string s) {
    vector<int> suffix;
    int currSum = 0;
    int i = n-1;
    while(i >= 0) {
        suffix.push_back(currSum);
        currSum += (s[i] == '1' ? 1 : -1);  // Bob +1  Alice -1
        --i;
    }
    sort(suffix.rbegin(), suffix.rend());
    int prefixSum = 0, ans = -1;
    int j = 2; 
    while(j <= n) {
        if(j-1 < suffix.size()) {  
            prefixSum += suffix[j-2];  
            if(prefixSum >= k) { 
                ans = j;
                break;
            }
        }
        ++j;
    }
    return ans;  
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        cout << solve(n, k, s) << endl;
    }
    return 0;
}