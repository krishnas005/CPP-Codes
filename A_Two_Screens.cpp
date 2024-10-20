#include <bits/stdc++.h>
using namespace std;

int LCP(const string& s, const string& t) {
    int length = 0;
    int n = s.size();
    int m = t.size();
    while (length < n && length < m && s[length] == t[length]) {
        length++;
    }
    return length;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        int ans = 0;
        int lcpLength = LCP(s, t);
        if(lcpLength > 0) ans = 1;
        ans += s.size()-lcpLength;
        ans += t.size()-lcpLength;
        ans += lcpLength;
        cout << ans << endl;
    }
    return 0;
}