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
        int n, m;
        cin >> n >> m; 
        vector<vector<char>> arr(n, vector<char>(m));
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cin >> arr[i][j];
            }
        }
        for (int col=0; col<m; ++col) {
            int empty_row = n - 1;
            for (int row=n-1; row>=0; --row) {
                if (arr[row][col] == 'o') {
                    empty_row = row-1;
                } else if (arr[row][col] == '*') {
                    if (row != empty_row) {
                        swap(arr[row][col], arr[empty_row][col]);
                    }
                    empty_row--;
                }
            }
        }
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
