#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        if(n % 2 == 0) {
            cout << n/2 << " " << n/2 << endl;
            continue;
        }
        int minLCM = n * (n - 1);
        int bestA = 1;
        for(int i=2; i*i<=n; ++i) {
            if(n % i == 0) {
                int a1 = i, b1 = n - a1;
                int a2 = n / i, b2 = n - a2;
                int lcm1 = (a1 * b1) / __gcd(a1, b1);
                int lcm2 = (a2 * b2) / __gcd(a2, b2);
                if(lcm1 < minLCM) {
                    minLCM = lcm1;
                    bestA = a1;
                } 
                if(lcm2 < minLCM) {
                    minLCM = lcm2;
                    bestA = a2;
                }
            }
        }
        cout << bestA << " " << n - bestA << endl;
    }
    return 0;
}