#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int n, vector<int> &a) {
    unordered_map<long long, int> prefixMap;
    prefixMap[0] = -1; 
    long long prefixSum = 0;
    int count = 0, lastEnd = -1;
    for(int i=0; i<n; i++) {
        prefixSum += a[i];
        if (prefixMap.find(prefixSum) != prefixMap.end() && prefixMap[prefixSum] >= lastEnd) {
            ++count;
            lastEnd = i;
            prefixMap.clear();
            prefixMap[0] = i;
            prefixSum = 0;
        }
        else {
            prefixMap[prefixSum] = i;
        }
    }
    cout << count << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        solve(n, a);
    }
    return 0;
}
