#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        long long n;
        cin >> n;
        if(n==2 || n&1) {
            cout << -1 << endl;
            continue;
        }
        if(n == 4) {
            cout << 1 << " " << 1 << endl;
            continue;
        }
        n = n/2;
        long long maxx = n / 2;
        long long minn = -1;
        if(n%3 == 0) minn = n / 3;
        else minn = ((n / 3) + 1); 
        cout << minn << " " << maxx << endl;
    }
    return 0;
}