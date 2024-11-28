#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int currRow, int currIdx, int n, vector<int>& h1, vector<int>& h2, vector<vector<int>>& dp) {
    if (currIdx == n) return 0; 
    if (dp[currRow][currIdx] != -1) return dp[currRow][currIdx]; 
    int pick = 0;
    if (currRow == 0) { 
        pick = h1[currIdx] + solve(1, currIdx+1, n, h1, h2, dp); 
    } else { 
        pick = h2[currIdx] + solve(0, currIdx+1, n, h1, h2, dp); 
    }
    int notPick = solve(currRow, currIdx+1, n, h1, h2, dp);
    return dp[currRow][currIdx] = max(pick, notPick);
}

int32_t main() {
    int n;
    cin >> n;
    vector<int> h1(n), h2(n);
    for (int i=0; i<n; i++) cin >> h1[i];
    for (int i=0; i<n; i++) cin >> h2[i];
    vector<vector<int>> dp(2, vector<int>(100005, -1));
    int option1 = solve(0, 0, n, h1, h2, dp);
    int option2 = solve(1, 0, n, h1, h2, dp);
    int result = max(option1, option2);
    cout << result << endl;
    return 0;
}
