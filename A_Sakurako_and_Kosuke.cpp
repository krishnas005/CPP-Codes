#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int turn = 1, x = 0;
        while (abs(x) <= n) {
            if (turn % 2 == 1) {
                x -= 2 * turn - 1;
            } else {
                x += 2 * turn - 1;
            }
            turn++;
        }
        if (turn % 2 == 0) {
            cout << "Sakurako" << endl;
        } else {
            cout << "Kosuke" << endl;
        }
    }
    return 0;
}
