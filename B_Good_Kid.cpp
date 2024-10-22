#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int minEle = INT_MAX;
        int minIdx = -1;
        long long ans = 1;
        for(int i=0; i<n; ++i) {
            int a;
            cin >> a;
            arr[i] = a;
            if(minEle > a) {
                minEle = a;
                minIdx = i;
            }
        }
        arr[minIdx] += 1;
        for(auto i:arr) ans*=i;
        cout << ans << endl;
    }
    return 0;
}