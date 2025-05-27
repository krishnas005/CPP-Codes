#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<pair<int, int>> arr(n);
        for(auto& it: arr) {
            cin >> it.first >> it.second;
        }
        if(n == 1) {
            cout << 1 << endl;
            continue;
        }
        multiset<int> x; // store all x coord
        multiset<int> y; // store all y 
        for(auto& it: arr) {
            x.insert(it.first);
            y.insert(it.second);
        }
        int ans = LLONG_MAX;
        for(auto& it: arr) {
            // remove each coord to check area without it
            x.erase(x.find(it.first));
            y.erase(y.find(it.second)); 
            int X = *x.rbegin() - *x.begin() + 1;
            int Y = *y.rbegin() - *y.begin() + 1;
            // assuming there must be an empty s;ace inbetween
            int currCost = X * Y;
            // if curr == n-1 mtlb no empty space, toh isko fir humee bahar rkhna hoga
            if(currCost == n-1) {
                currCost += min(X, Y);
            }
            ans = min(ans, currCost);
            x.insert(it.first);
            y.insert(it.second);
        }
        cout << ans << endl;
    }
    return 0;
}