#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m) {
    set<pair<int, int>> bulletX;
    multiset<int> bulletY;
    for (int i = 0; i < n; i++) {
        int x, ux;
        cin >> x >> ux;
        bulletX.insert({x, ux});
    }
    for (int i = 0; i < m; i++) {
        int y, uy;
        cin >> y >> uy;
        bulletY.insert(y * uy);
    }
    int count = 0;
    for (auto it : bulletX) {
        int x = it.first;
        int ux = it.second;
        auto y = bulletY.find(x * ux);
        if (y != bulletY.end()) {
            count++;
            bulletY.erase(y);
        }
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    solve(n, m);
    return 0;
}
