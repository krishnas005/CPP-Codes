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
    int n;
    cin >> n;
    string st;
    cin >> st;
    int ans = 0;
    int zeroes = 0, ones = 0;
    for(int i=0; i<n; ++i) {
        if(st[i] == '0') ++zeroes;
        else ++ones;
    }
    cout << abs(zeroes - ones) << endl;
    return 0;
}