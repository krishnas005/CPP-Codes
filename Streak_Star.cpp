#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, X;
        cin >> N >> X;
        vector<int> A(N);
        for(int i=0; i<N; ++i){
            cin >> A[i];
        }
        int n = A.size();
        int with = 1;
        int curr = 1;
        int without = 1;
        for(int i=1; i<n; ++i){
            if(A[i] >= A[i - 1]) {
                curr++;
                without = max(without, curr);
            }
            else {
                curr = 1;
            }
        }
        for(int i=0; i<n; ++i) {
            int original = A[i];
            A[i] *= X;
            curr = 1;
            int temp = 1;
            for(int j=1; j<n; ++j) {
                if(A[j] >= A[j-1]) {
                    curr++;
                    temp = max(temp, curr);
                }
                else {
                    curr = 1;
                }
            }
            with = max(with, temp);
            A[i] = original;
        }
        cout << max(with, without) << endl;
    }
    return 0;
}