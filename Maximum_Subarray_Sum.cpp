#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i=0; i<n; ++i) cin >> arr[i];
    ll ans = arr[0];
    ll currSum = arr[0];
    for(ll i=1; i<n; ++i) {
        currSum = max(arr[i], currSum + arr[i]);
        ans = max(ans, currSum);
    }
    cout << ans << endl;
    return 0;
}