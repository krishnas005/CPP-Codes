#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(vector<vector<int>>& matrix, int n) {
    int ans = 0;
    for (int startRow = 0; startRow < n; ++startRow) {
        int i = startRow, j = 0; 
        int minInDiagonal = 0;
        while (i < n && j < n) {
            minInDiagonal = min(minInDiagonal, matrix[i][j]);
            ++i;
            ++j;
        }
        ans += -minInDiagonal; 
    }
    for (int startCol = 1; startCol < n; ++startCol) {
        int i = 0, j = startCol;
        int minInDiagonal = 0;
        while (i < n && j < n) {
            minInDiagonal = min(minInDiagonal, matrix[i][j]);
            ++i;
            ++j;
        }
        ans += -minInDiagonal; 
    }
    return ans;
}

int32_t main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
        cout << solve(matrix, n) << endl;
    }
    return 0;
}
