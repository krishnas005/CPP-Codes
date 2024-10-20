#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; ++i) {
            cin >> arr[i];
        }
        bool flag = false;
        for(int i=0; i<n; ++i) {
            for(int j=i; j<n; ++j) {
                if(__gcd(arr[i], arr[j]) <= 2) {
                    flag = true;
                    break;
                }
            }
        }
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}