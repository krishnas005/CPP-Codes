#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T; 
    while (T--) {
        int k;
        cin >> k;
        vector<int> a(k);
        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }
        int gridSize = k - 2; 
        int n = 1, m = 1;
        for (int i=1; i*i<=gridSize; i++) {
            if (gridSize%i == 0) {
                int possibleN = i;
                int possibleM = gridSize / i;
                bool foundN = false, foundM = false;
                for (int j=0; j<k; j++) {
                    if (a[j] == possibleN) foundN = true;
                    if (a[j] == possibleM) foundM = true;
                    if (foundN && foundM) {
                        n = possibleN;
                        m = possibleM;
                        break;
                    }
                }
                if (foundN && foundM) break;
            }
        }
        cout << n << " " << m << endl;
    }
    return 0;
}
