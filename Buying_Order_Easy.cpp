#include <bits/stdc++.h>
using namespace std;

int CodeKannus05(int N, int onesCount, int zerosCount) {
    int maxDuplicates = min(onesCount + zerosCount, N - 1);
    return N + maxDuplicates;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> B(N + 1); 
        for (int i = 1; i <= N; i++) {
            cin >> B[i];
        }
        int onesCount = 0, zerosCount = 0;
        for (int i = 1; i < N; i++) {
            if (B[i] == 1) onesCount++;
        }
        for (int i = 2; i <= N; i++) {
            if (B[i] == 0) zerosCount++;
        }
        int result = CodeKannus05(N, onesCount, zerosCount);
        cout << result << endl;
    }
    return 0;
}
