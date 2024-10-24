#include <bits/stdc++.h>
using namespace std;
#define ll long long

void CodeKannus05() {
    ll N;
    cin >> N;
    vector<ll> A(N + 1);
    for (ll i = 0; i < N + 1; ++i) {
        cin >> A[i];
    }
    bool changed = true;
    while (changed) {
        changed = false;
        ll maxVal = -1;
        ll maxIdx = -1;
        for (ll i = 0; i < N; ++i) {
            if (A[i] <= 2 * A[N] && A[i] > A[N] && A[i] > maxVal) {
                maxVal = A[i];
                maxIdx = i;
            }
        }
        if (maxIdx != -1) {
            swap(A[maxIdx], A[N]);
            changed = true;
        }
    }
    ll sum = 0;
    for (ll i = 0; i < N; ++i) {
        sum += A[i];
    }
    
    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll T;
    cin >> T;
    while (T--) {
        CodeKannus05();
    }
    return 0;
}