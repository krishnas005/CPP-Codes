#include <bits/stdc++.h>
using namespace std;

// Macros for convenience
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define forn(i, n) for (int i = 0; i < int(n); i++)     // For loop from 0 to n-1
#define forr(i, a, b) for (int i = int(a); i <= int(b); i++) // For loop from a to b
#define rfor(i, a, b) for (int i = int(a); i >= int(b); i--) // Reverse for loop
#define debug_var(x) cerr << (#x) << " = " << (x) << endl  // Single variable debugging

// Constants
const ll MOD = 1e9+7;
const ll INF = LLONG_MAX;
const double EPS = 1e-9;

// Utility functions
template<typename T>
void debug(vector<T> vec) {
    cerr << "[ "; 
    for (T val : vec) cerr << val << " "; 
    cerr << "]" << endl; 
}

// GCD and LCM
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// Binary Exponentiation
ll binpow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

// Prime Check (Basic)
bool isPrime(ll n) {
    if (n <= 1) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Sieve of Eratosthenes
vector<bool> sieve(ll n) {
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

// Sorting helpers
bool cmp_desc(int a, int b) { return a > b; } // Comparison for descending order

// Binary Search
int binary_search(vi &arr, int key) {
    int lo = 0, hi = sz(arr) - 1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;  // Key not found
}

// Traversal and utility functions
void print_vector(const vi &vec) {
    for (int x : vec) cout << x << " ";
    cout << endl;
}

// Prefix sum array
vi prefix_sum(const vi &arr) {
    int n = sz(arr);
    vi prefix(n);
    prefix[0] = arr[0];
    forr(i, 1, n-1) prefix[i] = prefix[i-1] + arr[i];
    return prefix;
}

// Finding the maximum element in an array
int find_max(const vi &arr) {
    return *max_element(all(arr));
}

// Finding the minimum element in an array
int find_min(const vi &arr) {
    return *min_element(all(arr));
}

// 2D grid traversal (right, down, left, up)
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool isValid(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

// Main solver function
void solve() {
    int n;
    cin >> n;
    vi arr(n);
    
    forn(i, n) cin >> arr[i]; // Input array
    
    sort(all(arr)); // Sorting array in ascending order
    print_vector(arr);
    
    sort(all(arr), cmp_desc); // Sorting array in descending order
    print_vector(arr);
    
    // Example binary search usage
    int key;
    cin >> key;
    int index = binary_search(arr, key);
    if (index != -1) cout << "Found at index: " << index << endl;
    else cout << "Not found" << endl;
    
    // Example prefix sum
    vi prefix = prefix_sum(arr);
    print_vector(prefix);
}

// Main function
int main() {
    fast_io; // Fast input/output
    int t = 1;
    cin >> t; // Uncomment if there are multiple test cases
    while (t--) {
        solve();
    }
    return 0;
}
