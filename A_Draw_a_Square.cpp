#include <bits/stdc++.h>
using namespace std;
#define int long long
const int minn = 1e9;
const int maxx = 1e9;
#define endl '\n'

int solve(int x1, int y1, int x2, int y2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        vector<pair<int, int>> points = {{-l, 0}, {r, 0}, {0, -d}, {0, u}};
        vector<int> temp;
        for(int i=0; i<4; ++i) {
            for(int j=i+1; j<4; ++j) {
                int curr = solve(points[i].first, points[i].second, points[j].first, points[j].second);
                temp.push_back(curr);
            }
        }
        sort(temp.begin(), temp.end());
        bool flag = (temp[0] == temp[1] && temp[1] == temp[2] && temp[2] == temp[3] && temp[4] == temp[5] && 2 * temp[0] == temp[4]);   
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}