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
        int n, k;
        cin >> n >> k;
        vector<int> arr(2*n);
        k = 2*k;
        for(int i=0; i<2*n; ++i) cin >> arr[i];
        vector<int> freq(n+1, 0);
        for(int i=0; i<n; ++i) freq[arr[i]]++;
        vector<int> occur0, occur1, occur2;
        for(int i=1; i<=n; ++i) {
            if(freq[i] == 0) occur0.push_back(i);
            else if(freq[i] == 1) occur1.push_back(i);
            else occur2.push_back(i);
        }
        int temp = 0;
        for(auto &i: occur2) {
            if(temp < k) {
                temp += 2;
                cout << i << " " << i << " ";
            }
        }
        for(auto &i: occur1) {
            if(temp < k) {
                ++temp;
                cout << i << " ";
            }
        }
        cout << endl;
        temp = 0;
        for(auto &i: occur0) {
            if(temp < k) {
                temp += 2;
                cout << i << " " << i << " ";
            }
        }
        for(auto &i: occur1) {
            if(temp < k) {
                ++temp;
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}