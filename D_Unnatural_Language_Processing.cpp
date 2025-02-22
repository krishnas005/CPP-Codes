#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool isC(char c) {
    return c == 'b' || c == 'd' || c == 'c';
}

bool isV(char c) {
    return c == 'a' || c == 'e';
}

int32_t main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        while(!s.empty()) {
            int temp;
            if(isV(s.back())) temp = 2;
            else temp = 3;
            while(temp--) {
                ans += s.back();
                s.pop_back();
                if(s.empty()) break;
            }
            ans += '.';
        }
        ans.pop_back();
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}