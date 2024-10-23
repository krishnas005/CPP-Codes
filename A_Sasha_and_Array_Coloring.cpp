#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; ++i) cin >> arr[i];
        sort(arr.begin(), arr.end());
        int i=0; 
        int j=n-1;  
        ll sum = 0;
        while(i < j) {
            sum += arr[j] - arr[i];
            ++i;
            --j;
        }
        cout << sum << endl;
    }
    return 0;
}