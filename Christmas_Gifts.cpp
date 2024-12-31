#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int H, L, W;
        cin >> H >> L >> W;
        int ans = 0;
        int area = 2 * (H * L + L * W + W * H);
        ans = 1000 / area;
        cout << ans << endl;
    }
    return 0;
}