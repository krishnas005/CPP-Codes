#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        if (n <= 4) {
            cout << -1 << endl;
            continue;
        }
        vector<int> odd, even, result;
        for (int i=1; i<=n; ++i) {
            (i % 2 == 0 ? even : odd).push_back(i);
        }
        for (auto &num : odd) {
            if (num != 5) result.push_back(num);
        }
        if (n >= 5)  result.push_back(5);
        result.push_back(4);
        for (auto &num : even) {
            if (num != 4) result.push_back(num);
        }
        for (auto &val : result) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
