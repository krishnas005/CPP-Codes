#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(vector<int>& a, vector<int>& b, int n) {
    int countOneA = count(a.begin(), a.end(), 1);
    int countOneB = count(b.begin(), b.end(), 1);
    int oneDiff = abs(countOneA - countOneB);
    int mismatches = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) mismatches++;
    }
    return mismatches > oneDiff ? oneDiff + 1 : oneDiff;
}

int32_t main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        cout << solve(a, b, n) << endl;
    }
    return 0;
}
