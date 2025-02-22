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
        int n, k;
        cin >> n >> k;
        string s; 
        cin >> s;
        int count = 0;
        map<char, int> mp;
        for(int i=0; i<n; ++i) {
            mp[s[i]]++;
        } 
        for(auto& it: mp) {
            char curr = it.first;
            if(islower(curr)) {
                char temp = toupper(curr);
                int minn = min(mp[curr], mp[temp]);
                count += minn;
                mp[curr] -= minn;
                mp[temp] -= minn;
            }
            else {
                char temp = tolower(curr);
                int minn = min(mp[curr], mp[temp]);
                count += minn;
                mp[curr] -= minn;
                mp[temp] -= minn;  
            }
        }
        for(auto& it: mp) {
            if(k <= 0) break;
            if(it.second >= 2) {
                int neww = it.second / 2;
                count += min(k, neww);
                k-=neww;
            }
        }
        cout << count << endl;
    }
    return 0;
}