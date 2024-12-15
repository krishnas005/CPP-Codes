#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            int max_digit = s[i] - '0';
            int pos = i;

            for (int j = i + 1; j < n && j - i <= 9; j++) {
                int candidate = (s[j] - '0') - (j - i);
                if (candidate > max_digit && candidate >= 0) {
                    max_digit = candidate;
                    pos = j;
                }
            }

            if (pos != i) {
                char new_digit = '0' + max_digit;
                for (int k = pos; k > i; k--) {
                    s[k] = s[k - 1];
                }
                s[i] = new_digit;
            }
        }

        cout << s << "\n";
    }

    return 0;
}
