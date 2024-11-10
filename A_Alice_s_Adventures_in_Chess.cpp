#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T;
    cin >> T;
    while(T--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int maxSteps = n * 30;
        int startA = 0;
        int startB = 0;
        bool flag = false;
        for(int i = 0; i < maxSteps; ++i) {
            char move = s[i % n];
            if (move == 'N') startB++;
            else if (move == 'E') startA++;
            else if (move == 'S') startB--;
            else if (move == 'W') startA--;
            if(startA == a && startB == b) {
                flag = true;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
