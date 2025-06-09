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
        cin >> n;
        vector<int> arr = {1};
        for(int i=3; i<=n; ++i) arr.push_back(i);
        arr.push_back(2);
        for(int& it: arr) cout << it << " ";
        cout << endl; 
    }     
    return 0;
}