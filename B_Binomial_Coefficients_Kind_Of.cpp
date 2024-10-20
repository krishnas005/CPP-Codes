#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

void precompute_binomial_coefficients(vector<vector<int>> &C, int max_n) {
    for (int n = 0; n <= max_n; ++n) {
        C[n][0] = 1;
        C[n][n] = 1;
        for (int k = 1; k < n; ++k) {
            C[n][k] = (C[n][k - 1] + C[n - 1][k - 1]) % MOD; 
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cout << "Enter " << endl;
    cin >> t;
    
    vector<int> n(t), k(t);
    int max_n = 0;
    
    for (int i = 0; i < t; ++i) {
        cin >> n[i];
        max_n = max(max_n, n[i]);
    }
    
    for (int i = 0; i < t; ++i) {
        cin >> k[i];
    }

    vector<int> prev(max_n + 1, 0), curr(max_n + 1, 0);

    for (int i = 0; i <= max_n; ++i) {
        curr[0] = 1;
        curr[i] = 1;
        for (int j = 1; j < i; ++j) {
            curr[j] = (curr[j - 1] + prev[j - 1]) % MOD;
        }
        prev = curr; 
    }

    for (int i = 0; i < t; ++i) {
        cout << curr[k[i]] << '\n';
    }

    return 0;
}
