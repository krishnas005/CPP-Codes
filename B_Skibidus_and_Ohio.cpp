#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int n = s.size();
        bool flag = false;
        for(int i=0; i<n-1; ++i) {
            if(s[i] == s[i+1]) {
                flag = true;
                break;
            }
        }
        if(flag) cout << 1 << endl;
        else cout << n << endl;
    }
    return 0;
}