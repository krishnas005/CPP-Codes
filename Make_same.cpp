#include <bits/stdc++.h>
using namespace std;
#define int long long
const int minn = 1e9;
const int maxx = 1e9;
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
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        int ans = 0;
        int c11 = 0, c12 = 0;
        int c21 = 0, c22 = 0;
        int c31 = 0, c32 = 0;
        int c1 = 0, c2 = 0 , c3 = 0;
        for(auto& it: s1) {
            if(it == '0') c11++;
            else c12++;
        } 
        for(auto& it: s2) {
            if(it == '0') c21++;
            else c22++;
        }
        for(auto& it: s3) {
            if(it == '0') c31++;
            else c32++;
        }
        int ones = c12+c22+c32;
        if(ones % n != 0) {
            cout << -1 << endl;
            continue;
        }
        int temp = ones / n;
        if(temp == 0 || temp == 3) {
            cout << 0 << endl;
            continue;
        }
        int maxx = max(c12, max(c22, c32));
        int secondMaxx = max(min(c12, c22), min(max(c12, c22), c32));
        cout << (temp * n - (maxx + (temp == 2 ? secondMaxx : 0))) << endl;
    }
    return 0;
}