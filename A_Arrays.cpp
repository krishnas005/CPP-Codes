#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int nA, nB;
    cin >> nA >> nB;
    int k, m;
    cin >> k >> m;
    vector<int> A(nA), B(nB);
    for(int& it: A) cin >> it;
    for(int& it: B) cin >> it;
    sort(begin(A), end(A));
    sort(begin(B), end(B));
    if(A[k - 1] < B[nB - m]) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}