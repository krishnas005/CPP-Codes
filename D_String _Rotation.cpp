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
    while(T--){
        int n;
        string s;
        cin >> n >> s;
        if(n == 1){
            cout << s << endl;
            continue;
        }
        int idx = -1;
        for(int i=0; i<n-1; i++){
            if(s[i] > s[i+1]){
                idx = i;
                break;
            }
        }
        if(idx == -1) idx = n - 2;
        char c = s[idx];
        string temp = s.substr(0, idx) + s.substr(idx + 1);  
        int pos = 0;
        while(pos < temp.size() && temp[pos] <= c) ++pos;
        string ans = temp.substr(0, pos) + c + temp.substr(pos);
        cout << ans << endl;
    }
    return 0;
}