#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, h;
        cin >> n >> h;
        int weapon1 = 0, weapon2 = 0;
        for(int i=0; i<n; ++i) {
            int s, d;
            cin >> s >> d;
            if(s == 1) weapon1 = max(d, weapon1);
            else weapon2 = max(weapon2, d);
        }
        int bestt = max(weapon2, 2 * weapon1);
        int temp = h / bestt;
        int rem = h - temp * bestt;
        int ans = 0;
        if(rem > 0) {
            int tempo = INT_MAX;
            if(weapon1 >= rem) tempo = min(tempo, 1LL);
            if(bestt >= rem) tempo = min(tempo, 2LL);
            if(tempo == INT_MAX) {
                tempo = ((rem + bestt - 1) / bestt) * 2;
            }
            ans += tempo;
        }
        ans = ans + temp * 2;
        cout << ans << endl;
    }
    return 0;
}