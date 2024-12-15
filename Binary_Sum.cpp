#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, K;
        cin >> N >> K;
        bool flag = false;
        if(N%2 == 0) {
            if(K == N/2) flag = true;
        }
        else {
            if(K == N/2 || K == N/2 + 1) flag = true;
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
}