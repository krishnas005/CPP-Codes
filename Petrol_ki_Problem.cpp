#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> petrol(n), cost(n);
    int total_petrol = 0, total_cost = 0;
    for (int i = 0; i < n; i++) {
        cin >> petrol[i];gi
        total_petrol += petrol[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
        total_cost += cost[i];
    }
    if (total_cost > total_petrol) {
        cout << -1 << endl;
        return 0;
    }
    int current = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        current += petrol[i] - cost[i];
        if (current < 0) {
            current = 0;
            ans = i + 1;
        }
    }
    if (current > 0) cout << ans << endl;
    else cout << -1 << endl;
}