#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    int ans = 0;
    if(M%2 == 0) ans = M/2*N;
    else ans = (M-1)/2*N + N/2;
    cout << ans << endl;
    return 0;
}