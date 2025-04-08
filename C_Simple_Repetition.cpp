#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool check(int x) {
    if(x <= 1) return false;
    if(x == 2) return true;
    if(x % 2 == 0) return false;
    for(int i=3; i*i<=x; i+=2) {
        if(x % i == 0) return false;
    }
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--){
        int x;
        int k;
        cin >> x >> k;
        if(k == 1 && check(x)) cout << "YES" << endl;
        else {
            if(x == 1) {
                if(k == 2) cout << "YES" << endl;
                else cout << "NO" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}