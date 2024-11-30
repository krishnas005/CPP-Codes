#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<n-1; i++) {
        if(s[i] > s[i+1]) {
            cout << "YES" << endl << i+1 << " " << i+2 << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}