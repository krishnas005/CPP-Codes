#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m, L;
        cin >> n >> m >> L;
        vector<pair<int, int>> hurdles(n);
        vector<pair<int, int>> powerUps(m);
        for (int i=0; i<n; ++i) cin >> hurdles[i].first >> hurdles[i].second;
        for (int i=0; i<m; ++i) cin >> powerUps[i].first >> powerUps[i].second;
        hurdles.push_back({L, L});
        n++;
        int currJump = 1;
        int usedPowerUps = 0;
        bool isPossible = true;
        priority_queue<int> pq; 
        int powerUpIndex = 0;
        for(int i = 0; i < n; ++i) {
            int hurdleStart = hurdles[i].first;
            int hurdleEnd = hurdles[i].second;
            while(powerUpIndex < m && powerUps[powerUpIndex].first < hurdleStart) {
                pq.push(powerUps[powerUpIndex].second);
                powerUpIndex++;
            }
            int requiredJump = hurdleEnd - hurdleStart + 2;
            while(currJump < requiredJump && !pq.empty()) {
                currJump += pq.top(); 
                pq.pop();
                usedPowerUps++;
            }
            if(currJump < requiredJump) {
                isPossible = false;
                break;
            }
        }
        if(isPossible) {
            cout << usedPowerUps << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}