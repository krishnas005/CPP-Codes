#include<bits/stdc++.h>
using namespace std;
#define int long long

int solve(int idx, int currCount, vector<int>& freq, int N, int C, vector<vector<int>>& dp) {
    if(idx == 5) return 0;
    if(dp[idx][currCount] != -1) return dp[idx][currCount];
    int speakers = freq[idx];
    int costLearn = C + solve(idx+1, currCount, freq, N, C, dp);
    int costTranslator = ((currCount + speakers) * (currCount + speakers + 1) / 2) - (currCount * (currCount + 1) / 2);
    costTranslator += solve(idx + 1, currCount + speakers, freq, N, C, dp);
    return dp[idx][currCount] = min(costLearn, costTranslator);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N, C;
        cin >> N >> C;
        string S;
        cin >> S;
        vector<int> freq(5, 0);
        for(char& ch: S) {
            freq[ch - 'A']++;
        }
        vector<vector<int>> dp (6, vector<int>(N+1, -1));
        cout << solve(0, 0, freq, N, C, dp) << endl;
    }
    return 0;
}