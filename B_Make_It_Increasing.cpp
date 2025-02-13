#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &x : arr) cin >> x;
        int operations = 0;
        bool possible = true;

        for (int i = n - 2; i >= 0; --i) {
            if (arr[i] >= arr[i + 1]) {
                int steps = 0;
                while (arr[i] >= arr[i + 1] && arr[i] > 0) {
                    arr[i] /= 2;
                    steps++;
                }
                operations += steps;
                if (arr[i] == 0 && i != 0) {
                    possible = false;
                    break;
                }
            }
        }
        cout << (possible ? operations : -1) << endl;
    }

    return 0;
}
