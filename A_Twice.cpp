#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> mp;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            mp[a[i]]++; 
        }
        int score = 0;
        for (auto &it : mp) {
            score += it.second / 2; 
        }
        cout << score << endl;
    }
    return 0;
}
