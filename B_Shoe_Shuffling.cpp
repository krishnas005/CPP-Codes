#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> tab(n);
        map<int, int> cnts;
        for(int i=0;i<n;i++) {
            cin >> tab[i];
            cnts[tab[i]]++;
        }
        int bad=0;
        for(auto a:cnts) {
            if(a.second == 1) {
                cout<<"-1\n";
                bad = 1;
                break;
            }
        }
        if(bad) continue;
        for(int i=0;i<n;) {
            int j=i;
            while(j < n && tab[j] == tab[i])
                j++;
            for(int k=i+1;k<j;k++)
                cout<<k+1<<" ";
            cout<<i+1<<" ";
            i = j;
        }
        cout<<"\n";
        
    }
    return 0;
}