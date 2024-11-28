#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> B(N-1);
        for(auto &i: B) cin >> i;
        sort(B.begin(), B.end());
        vector<int> A;
        int prev = 1;
        A.push_back(1);
        for(auto i: B) {
            A.push_back(i-prev);
            prev = i-prev;
        }
        for(auto i: A) cout << i << " ";
        cout << endl;
    }
    return 0;
}