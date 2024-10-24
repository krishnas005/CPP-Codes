#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll getMedian(vector<ll>& freq) {
    ll total = freq[1] + freq[2] + freq[3];
    ll mid = (total + 1) / 2;
    ll count = 0;
    for(ll i = 1; i <= 3; i++) {
        count += freq[i];
        if(count >= mid) return i;
    }
    return 0;
}

ll CodeKannus05(vector<ll>& arr) {
    ll n = arr.size();
    ll count = 0;
    for(ll i = 0; i < n; i++) {
        ll sum = 0;
        vector<ll> freq(4, 0); 
        for(ll j = i; j < n; j++) {
            sum += arr[j];
            freq[arr[j]]++;
            double mean = (double)sum / (j - i + 1);
            ll median = getMedian(freq);
            if(abs(mean - median) < 1e-9) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << CodeKannus05(arr) << endl;
    }
    return 0;
}