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
        int n, x;
        cin >> n >> x;
        vector<int> arr;
        if(x < n) {
            for(int i=0; i<x; i++) arr.push_back(i);
            for(int i=x+1; i<n; i++) arr.push_back(i);
            arr.push_back(x);
        } else {
            for(int i=0; i<n; i++) arr.push_back(i);
        }
        for(int& it: arr) cout << it << " ";
        cout << endl;
    }
    return 0;
}