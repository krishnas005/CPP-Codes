#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int N, M, A, B;
        cin >> N >> M >> A >> B;
        int num = M - N * B;
        int den = A - B;
        if(den == 0 || num % den != 0) {
            cout << "No" << endl;
            continue;
        }
        int x = num / den;
        if(x >= 0 && x <= N) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}