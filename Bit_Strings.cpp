#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

// Function to calculate (base^exp) % MOD using modular exponentiation
int mod_exp(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;  // If exp is odd, multiply base with result
        }
        base = (base * base) % mod;  // Square the base
        exp /= 2;  // Halve the exponent
    }
    return result;
}

int32_t main() {
    int n;
    cin >> n;
    
    int ans = mod_exp(2, n, MOD);  
    cout << ans << endl;
    return 0;
}
