#include <bits/stdc++.h>
using namespace std;

long long SolveKannu06(long long a, long long b) {
    long long temp = max(b-a, (long long)0);
    return max(a-temp, (long long)0);
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        long long a, b;
        cin >> a >> b;
        cout << SolveKannu06(a, b) << endl;
    }
    return 0;
}