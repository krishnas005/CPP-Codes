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
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        double sum = 0;
        for(int& it: arr) {
            int a = 0;
            cin >> a;
            sum += a;
        }
        bool ans = sum / n == x;
        cout << (ans ? "YES" : "NO") << endl; 
    }
    return 0;
}