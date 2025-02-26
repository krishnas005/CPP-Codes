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
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        int l = 0;
        int r = 0;
        int temp = 0;
        for(int i=0; i<n; ++i) {
            int curr = 0;
            for(int j=i+1; j<n; ++j) {
                if(arr[j] > arr[i]) curr++;
                else if(arr[j] < arr[i]) curr--;
                if(curr < temp) {
                    temp = curr;
                    l = i;
                    r = j;
                }
            }
        }
        cout << l + 1 << " " << r + 1 << endl;
    }
    return 0;
}