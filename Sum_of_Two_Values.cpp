#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    unordered_map<int, int> mp;
    for(int i = 0; i < n; ++i) {
        int curr = arr[i];
        int complement = x - curr;
        if(mp.find(complement) != mp.end()) {
            cout << mp[complement] + 1 << " " << i + 1 << endl;
            return 0;
        }
        mp[curr] = i;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
