#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool solve(int n1, int n2, string& p, string& s) {
    int i = 0, j = 0;
    while(i < n1 && j < n2) {
        char ch = p[i];
        int curi = i, curj = j;
        while(i < n1 && p[i] == ch) i++;
        while(j < n2 && s[j] == ch) j++;
        int leni = i - curi;
        int lenj = j - curj;
        if(lenj >= leni && lenj <= 2 * leni) {
            continue;
        } else {
            return false;
        }
    }
    if(i == n1 && j == n2) return true;
    else return false;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        string p, s;
        cin >> p >> s;
        int n1 = p.size();
        int n2 = s.size();
        if(solve(n1, n2, p, s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}