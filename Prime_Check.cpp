#include <bits/stdc++.h>
using namespace std;

bool solve1(int n) {
    if(n == 1) return false;
    for(int i=2; i*i<=n; ++i) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

bool sieve_of_eratosthenes(int n) {
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    for(int i=2; i*i<=n; ++i) {
        if(prime[i]) {
            for(int j=2*i; j<=n; j+=i) {
                prime[j] = false;
            }
        }
    }
    return prime[n];
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        // bool ans = solve1(n);
        bool ans = sieve_of_eratosthenes(n);
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}