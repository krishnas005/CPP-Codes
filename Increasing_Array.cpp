#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i) cin >> arr[i];
    long long ans = 0;
    int currAns = 0;
    for(int i=1; i<n; ++i) {
        if(arr[i] < arr[i-1]) {
            currAns = arr[i-1] - arr[i];
            arr[i] += currAns;
            ans += currAns;
        }
    }
    cout << ans << endl;
    return 0;
}