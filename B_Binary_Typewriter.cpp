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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zero_one = 0;
        int one_zero = 0;
        char temp = '0';
        for(int i=0; i<n; ++i) {
            if(temp == '0' && s[i] == '1') ++zero_one;
            else if(temp == '1' && s[i] == '0') ++one_zero;
            temp = s[i];
        }
        int flag = 0;
        if(one_zero > 1 || zero_one > 1) flag = 2;
        else if(one_zero > 0 && zero_one > 0) flag = 1;
        cout << (n + zero_one + one_zero - flag) << endl;
    }
    return 0;
}