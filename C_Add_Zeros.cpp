#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> elements(n + 1);
    for(int idx = 1; idx <= n; idx++) {
        int val;
        cin >> val;
        elements[idx] = {val + idx - 1, idx - 1};
    }
    elements[1].first = 0; 
    sort(elements.begin(), elements.end()); 
    map<int, bool> possible_lengths;
    possible_lengths[n] = true;
    for(int idx = 2; idx <= n; idx++) {
        auto [adjusted_val, zeros] = elements[idx];
        if(possible_lengths[adjusted_val]) {
            possible_lengths[adjusted_val + zeros] = true;
        }
    } 
    int max_length = 0;
    for(auto [length, possible] : possible_lengths) {
        if(possible) {
            max_length = length;
        }
    }
    cout << max_length << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}