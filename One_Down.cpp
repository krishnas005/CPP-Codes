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
        int N;
        cin >> N;
        string s, t;
        cin >> s >> t;
        int cnt1 = 0, cnt2 = 0;
        bool flag = true;
        for(int i=0; i<N; i++) {
            if(s[i] == '1') cnt1++;
            if(t[i] == '1') {
                cnt2++;
                if(s[i] == '0') {
                    flag = false;
                    break;
                }
            }
        }
        if(flag && cnt1 >= cnt2 && ((cnt1 - cnt2) % 2 == 0)) cout << "Yes" << endl; 
        else cout << "No" << endl;
    }
    return 0;
}