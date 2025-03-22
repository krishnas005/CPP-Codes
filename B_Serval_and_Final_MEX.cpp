#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(vector<int>& arr) {
    set<int> s(arr.begin(), arr.end());
    int m = 0;
    while(s.count(m)) m++;
    return m;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> a(n);
        int zeroCount = 0;
        for(int i=0; i<n; ++i) {
            cin >> a[i];
            if(a[i] == 0) ++zeroCount;
        }
        if(zeroCount == 0) {
            cout << 1 << endl;
            cout << 1 << " " << n << endl;
            continue;
        }
        vector<pair<int,int>> ans;
        while(a.size() > 1){
            int mexx = solve(a);
            if(mexx == 0){
                ans.push_back({1, a.size()});
                break;
            }
            else {
                int zeroIdx = -1;
                for(int i=0; i<a.size(); i++){
                    if(a[i] == 0) { 
                        zeroIdx = i; 
                        break; 
                    }
                }
                if(zeroIdx < a.size()-1){
                    ans.push_back({zeroIdx+1, zeroIdx+2});
                    vector<int> temp = {a[zeroIdx], a[zeroIdx+1]};
                    int mexx = solve(temp);
                    a.erase(a.begin()+zeroIdx, a.begin()+zeroIdx+2);
                    a.insert(a.begin()+zeroIdx, mexx);
                }
                else {
                    ans.push_back({zeroIdx, zeroIdx+1});
                    vector<int> temp = {a[zeroIdx-1], a[zeroIdx]};
                    int mexx = solve(temp);
                    a.erase(a.begin()+(zeroIdx-1), a.begin()+zeroIdx+1);
                    a.insert(a.begin()+(zeroIdx-1), mexx);
                }
            }
        }
        cout << ans.size() << endl;
        for(auto& it: ans){
            cout << it.first << " " << it.second << endl;
        }
    }
    return 0;
}