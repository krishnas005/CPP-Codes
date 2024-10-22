#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> arr;
    for(int i=0; i<n; ++i) {
        int a, b;
        cin >> a >> b;
        arr.push_back({b, a});
    }
    sort(arr.begin(), arr.end());
    int currLast = -1;
    int ans = 0;
    for(auto i: arr) {
        if(i.second >= currLast) {
            ans++;
            currLast = i.first;
        }
    }
    cout << ans << endl;
    return 0;
}