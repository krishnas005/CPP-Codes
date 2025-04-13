#include <bits/stdc++.h>
using namespace std;

unordered_set<string> visited;
unordered_set<string> st;   
void solve(const string &s) {
    if(visited.count(s)) return;
    visited.insert(s);
    if(!s.empty()) st.insert(s);
    if(s.size() < 2) return;
    string s1 = s.substr(1);
    solve(s1);
    string s2 = s.substr(0,1) + s.substr(2);
    solve(s2);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        visited.clear();
        st.clear();
        solve(s);
        cout << st.size() << "\n";
    }
    return 0;
}