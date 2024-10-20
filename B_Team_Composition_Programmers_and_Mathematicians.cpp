#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int a, b;
        cin >> a >> b;
        int total = a + b;
        int ans = min(total/4, min(a, b));
        cout << ans << endl;
    }
    return 0;
}