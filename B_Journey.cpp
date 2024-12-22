#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int ans = 0;
        int summ = a + b + c;
        if(n%summ == 0) {
            ans = n / summ;
            ans *= 3;
        } else {
            int leftt = n % summ;
            int temp = n / summ;
            ans = temp * 3; 
            if(leftt > 0) {
                if(leftt <= a) ans += 1;
                else if(leftt <= a + b) ans += 2;
                else ans += 3;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
