#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long a) {
    long long start = 1;
    long long end = 1e9;
    while (start <= end) {
        long long mid = start + (end - start) / 2;
        long long square = mid * mid;
        if (square == a) {
            return true;
        }
        else if (square < a) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        long long totalSquare = 0;
        for(int i=0; i<n; ++i) {
            int a = 0;
            cin >> a;
            totalSquare += a;
        }
        isPerfectSquare(totalSquare) ? cout << "YES" << endl : cout << "NO" << endl; 
    }
    return 0;
}