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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> arr1(n), arr2(m);
        for(int& it: arr1) cin >> it;
        for(int& it: arr2) cin >> it;
        set<int> s1(arr1.begin(), arr1.end());
        set<int> s2(arr2.begin(), arr2.end());
        int a = 0, b = 0;
        bool flag = false;
        for(int i=1; i<=k; ++i) {
            if(s1.count(i) && s2.count(i)) continue;
            else if(s1.count(i)) b++;
            else if(s2.count(i)) a++;
            else {
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }
        if(flag) continue;
        if(a > k/2 || b > k/2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}