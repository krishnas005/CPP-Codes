#include <bits/stdc++.h>
using namespace std;
#define int long long
#define minn 1e9
#define maxx 1e9
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        if(((n-1) % 3 == 0) || ((n+1) % 3 == 0)) cout << "First" << endl;
        else cout << "Second" << endl;
    }
    return 0;
}