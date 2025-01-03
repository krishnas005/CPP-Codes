#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int& i : arr) cin >> i;
        int temp = arr[0];
        sort(arr.begin(), arr.end());
        int pos = distance(arr.begin(), find(arr.begin(), arr.end(), temp));
        if(pos == 0) {
            cout << temp+(arr[1]-temp)/2 << endl;
        } else if(pos == n-1) {
            cout << 1000000 - temp+1+(temp-arr[n-2])/2 << endl;
        } else {
            int left = temp - (temp-arr[pos-1])/2;
            int right = temp + (arr[pos+1]-temp)/2;
            cout << right-left+1 << endl;
        }
    }
    return 0;
}