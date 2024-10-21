#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int ans = 0, currMax = 0;
    for(int i=1; i<n.size(); ++i) {
        if(n[i] == n[i-1]) {
            ++currMax;
        } else {
            ans = max(ans, currMax);
            currMax = 0;
        }
    }
    ans = max(ans, currMax);
    cout << ans+1 << endl;
    return 0;
}