#include <bits/stdc++.h>
using namespace std;
#define int long long

bool CodeKannu06(string s, string r) {
    vector<char> v(s.begin(), s.end());
    int n = v.size();
    for(int i=0; i<r.length(); i++) {
        bool found = false;
        for(int k=0; k<n-1; k++) {
            if(v[k] != v[k + 1]) {
                v[k] = r[i];
                for(int j=k+1; j<n-1; j++) {
                    v[j] = v[j + 1];
                }
                n--;
                found = true;
                break;
            }
        }
        if(!found) return false;
    }
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        string s, r;
        cin >> s >> r;
        cout << (CodeKannu06(s, r) ? "YES" : "NO") << endl;
    }
    return 0;
}