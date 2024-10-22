#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i=0; i<n; ++i) cin >> arr[i];
    sort(arr.begin(), arr.end());
    ll median = 0;
    if(n&1) median = arr[n/2];
    else median = (arr[n/2] + arr[n/2-1])/2;
    ll ans = 0;
    for(ll i=0; i<n; ++i) ans += abs(arr[i] - median);
    cout << ans << endl;
    return 0;
}