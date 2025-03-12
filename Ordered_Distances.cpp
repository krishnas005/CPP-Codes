#include <bits/stdc++.h>
using namespace std;
#define int long long
const int minn = 1e9;
const int maxx = 1e9;
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<int> X(N), Y(N);
        for(int& it: X) cin >> it;
        for(int& it: Y) cin >> it;
        int ans = -1;
        for(int i=0; i<N; ++i) {
            int curr = X[i];
            vector<pair<int, int>> pairs;
            for(int j=0; j<N; ++j) {
                pairs.push_back({abs(X[j] - curr), X[j]});
            }
            sort(pairs.begin(), pairs.end());
            vector<int> temp;
            for(auto& p: pairs) {
                temp.push_back(p.second);
            }
            if(temp == Y) {
                ans = i + 1; 
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}