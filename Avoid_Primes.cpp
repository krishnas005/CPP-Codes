#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

vector<bool> seive(int n) {
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false; 
    for(int i=2; i*i<n; i++) {
        if(isPrime[i]) {
            for(int j=i*i; j<n; j+=i) isPrime[j] = false;
        }
    }
    return isPrime;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        if(n == 1) cout << "1" << endl;
        else if(n == 2) cout << "1 2" << endl;
        else if(n == 3) cout << "2 1 3" << endl;
        else {
            vector<bool> isPrime = seive(n+1);
            vector<int> primes, others;
            for(int i=4; i<=n; ++i) {
                if(isPrime[i]) primes.push_back(i);
                else others.push_back(i);
            }
            vector<int> arr = {2, 1, 3};
            int i = 0, j = 0;
            while(i < primes.size() && j < others.size()) {
                arr.push_back(primes[i]);
                arr.push_back(others[j]);
                ++i; ++j;
            }
            while(i < primes.size()) {
                arr.push_back(primes[i]);
                ++i;
            }
            while(j < others.size()) {
                arr.push_back(others[j]);
                ++j;
            }
            for(int& it: arr) cout << it << " ";
            cout << endl;
        }
    }
    return 0;
}