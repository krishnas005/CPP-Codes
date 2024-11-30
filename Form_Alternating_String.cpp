#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    vector<int> arr(n);
    for(int& it : arr) cin >> it;
    int total = accumulate(arr.begin(), arr.end(), 0LL);
    int toKeep = 0;  
    char prevChar = '@'; 
    int i = 0;
    while(i < n) {
        if(s[i] != prevChar) {
            toKeep += arr[i];
            prevChar = s[i];
        }else {
            if(arr[i]>arr[i-1]) {
                toKeep += arr[i] - arr[i-1];
            }
        }
        ++i;
    }
    int ans = total - toKeep;
    cout << ans;
    return 0;
}