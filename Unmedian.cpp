#include <bits/stdc++.h>
using namespace std;
#define ll long long

void CodeKannus05(ll n, vector<ll> &a) {
    vector<pair<ll, ll>> ans;
    bool flag = false;
    while (true) {
        vector<ll> b = a;
        sort(b.begin(), b.end());
        if (a == b) {
            flag = true;
            break;
        }
        if (a.size() <= 2) break;
        ans.push_back({1, 3});
        vector<ll> cur(a.begin(), a.begin() + 3);
        vector<ll> cur2 = cur;
        sort(cur.begin(), cur.end());
        ll pos;
        if (cur2[0] == cur[1]) pos = 0;
        else if (cur2[1] == cur[1]) pos = 1;
        else pos = 2;
        a.erase(a.begin() + pos);
    }
    if (!flag) {
        cout << -1 << endl;
    }
    else {
        cout << ans.size() << endl;
        for (auto &it : ans) {
            cout << it.first << " " << it.second << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }
        CodeKannus05(n, a);
    }
    return 0;
}