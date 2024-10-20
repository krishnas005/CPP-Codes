#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int totalFruits;
        cin >> totalFruits;
        int blendPerSec, fruitsInBlend;
        cin >> blendPerSec >> fruitsInBlend;
        int time = 0;

        int turns = min(blendPerSec, fruitsInBlend);
        if(totalFruits%turns == 0) {
            cout << totalFruits/turns << endl;
        } else {
            cout << totalFruits/turns+1 << endl;
        }
    }
    return 0;
}