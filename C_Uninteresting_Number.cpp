#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(int sum, int cnt2, int cnt3) {
    int target = sum % 9;
    if(target == 0) {
        target = 9-target;
    }
    for(int i=0; i<=2 && i<=cnt3; ++i) {
        int temp = target-6*i;  
        if(temp < 0) temp += 9;
        if(temp <= cnt2) return true;
    }
    return false;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        string n;
        cin >> n;
        int sum = 0, cnt2 = 0, cnt3 = 0;
        for(char& c : n) {
            int digit = c - '0';
            sum += digit;
            if(digit == 2) cnt2++;
            if(digit == 3) cnt3++;
        }
        if(solve(sum, cnt2, cnt3)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}