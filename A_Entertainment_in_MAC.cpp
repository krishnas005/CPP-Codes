#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int m = s.size();
        string rev = s;
        reverse(s.begin(), s.end());
        if(s < rev) cout << s << rev << endl;
        else cout << rev << endl;
    }
    return 0;
}