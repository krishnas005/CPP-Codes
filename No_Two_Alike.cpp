#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int& i: A) cin >> i;
        vector<int> prefix(N+1); 
        vector<bool> seen(N+1);
        for(int i=0; i<N; i++) {
            prefix[A[i]] = i;
        }
        int ans = 0;
        int i = 0;
        while(i<N) {
            if(prefix[A[i]] != i) {
                int r = prefix[A[i]];
                for(int j = i + 1; j <= r; j++) {
                    r = max(r, prefix[A[j]]);
                }
                fill(seen.begin(), seen.end(), false);
                int temp = 0;
                for(int j=i; j<=r; j++) {
                    if (!seen[A[j]]) {
                        temp++;
                        seen[A[j]] = true;
                    }
                }
                ans += temp;
                i = r + 1;
            } else {
                i++;
            }
        }
        cout << ans << "\n";  
    }
    return 0;
}