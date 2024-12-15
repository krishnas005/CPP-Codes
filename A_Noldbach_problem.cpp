#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

bool is_valid_prime(int p, const vector<int>& primes) {
    for (int i = 0; i < primes.size() - 1; ++i) {
        if (primes[i] + primes[i + 1] + 1 == p) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> primes = sieve(n);

    int count = 0;
    for (int p : primes) {
        if (is_valid_prime(p, primes)) {
            count++;
        }
    }

    if (count >= k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
