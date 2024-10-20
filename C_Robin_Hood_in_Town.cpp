#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        if (n <= 2) {
            cout << -1 << endl;
            continue;
        }
        int sum = accumulate(arr.begin(), arr.end(), 0);
        sort(arr.begin(), arr.end());
        int req = arr[n / 2] * 2 * n + 1; 
        if (sum >= req) {
            cout << 0 << endl;
        } else {
            cout << req - sum << endl;
        }
    }
    return 0;
}