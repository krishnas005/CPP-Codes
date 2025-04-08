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
        string s;
        cin >> s;
        int n = s.size();
        int maxx = 0;
        int zeroo = 0;
        for(auto& c: s) {
            if(c == '0') zeroo++;
            else maxx = max(maxx, zeroo + 1);
        }
        cout << n - maxx << endl;
    }
    return 0;
}