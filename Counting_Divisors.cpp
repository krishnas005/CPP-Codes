#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n;
    cin >> n;
    vector<int> arr(1000001, 0);
    for(int i=1; i<=1000000; ++i) {
        for(int j=i; j<=1000000; j+=i) {
            arr[j]++;
        }
    }
    while(n--) {
        int x;
        cin >> x;
        cout << arr[x] << endl;
    }
    return 0;
}