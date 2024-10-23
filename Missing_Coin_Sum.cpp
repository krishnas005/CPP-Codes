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
    ll ans = 0;
    for(ll i=0; i<n; ++i) {
        if(arr[i] > ans+1) break;
        ans += arr[i];
    }
    cout << ans+1 << endl;
    return 0;
}