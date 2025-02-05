#include <bits/stdc++.h>
using namespace std;

unordered_map<string, bool> dp;

bool solve(int idx, int sum, string& A, string& B, int N) {
    if(idx >= N) return (sum % 2 == 1);
    string key = to_string(idx) + "_" + to_string(sum);
    if(dp.find(key) != dp.end()) {
        return dp[key];
    }
    bool op1 = solve(idx + 1, sum + (A[idx] == '1' ? 1 : 0), A, B, N);
    bool op2 = solve(idx + 1, sum + (B[idx] == '1' ? 1 : 0), A, B, N);
    return dp[key] = op1 || op2;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string A, B;
        cin >> A >> B;
        dp.clear();
        if(solve(0, 0, A, B, N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}