#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll CodeKannus05(string s) {
    ll a = 0, b = 0;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='0') ++a;
        else ++b;
    }
    ll ans=0;
    if(b==0) ans = a;
    else if(b%2!=0) ans = 1;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin >> T;
    while(T--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        cout << CodeKannus05(s) << endl;
    }
    return 0;
}