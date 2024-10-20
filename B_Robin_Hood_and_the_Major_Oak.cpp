#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  
    while (T--) {
        long long n, k;
        cin >> n >> k; 
        long long x = k / 2;
        if(n%2 && k%2) ++x;   
        if (x % 2 == 0) {
            cout << "YES" << endl;   
        } else {
            cout << "NO" << endl;    
        }
    }
    return 0;
}
