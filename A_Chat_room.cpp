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
    string s;
    cin >> s;
    int n1 = s.size();
    string t = "hello";
    int n2 = t.size();
    int i = 0, j = 0;
    while(i < n1 && j < n2) {
        if(s[i] == t[j]) {
            ++i;
            ++j;
        }
        else ++i;
    }
    if(j == n2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}