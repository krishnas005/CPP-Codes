#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
        int operations = INT_MIN;
        unordered_map<int, int> count;
        for (int i = 0; i < n; i++) {
            count[h[i]]++;
        }
        for(auto i : count) {
            operations = max(operations, i.second);
        }
        if(operations == INT_MAX) {
            cout << 0 << endl;
        } else {
            cout << n - operations << endl;
        }
    }

    return 0;
}