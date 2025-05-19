#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string f, m, s;
    cin >> f >> m >> s;
    map<string, string> beats;
    beats["rock"] = "scissors";
    beats["scissors"] = "paper";
    beats["paper"] = "rock";
    map<string, int> mp;
    mp[f]++;
    mp[m]++;
    mp[s]++;
    if(mp.size() != 2) {
        cout << "?" << endl;
        return 0;
    }
    string uniquee, common;
    for(auto& p: mp) {
        if(p.second == 1) uniquee = p.first;
        else common = p.first;
    }
    if(beats[uniquee] == common) {
        if(f == uniquee) cout << "F" << endl;
        else if(m == uniquee) cout << "M" << endl;
        else cout << "S" << endl;
    } else {
        cout << "?" << endl;
    }
    return 0;
}