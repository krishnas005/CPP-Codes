#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        long long l, r;
        cin >> l >> r;
        r -= l;
        long long s = 2;
        long long e = 1e9;
        while(s < e) {
            long long mid = s + (e-s) / 2;
            if(mid*(mid-1)/2 <= r) {
                s = mid + 1;
            } else e = mid;
        }
        cout << s-1 << endl;
    }
    return 0;
}