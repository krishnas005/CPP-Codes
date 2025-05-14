#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        int n = s.size();
        set<char> st;
        for(int i=0; i<n; ) {
            int j = i;
            while(j < n && s[j] == s[i]) j++; 
            int len = j - i;
            if(len % 2 == 1) st.insert(s[i]);
            i = j;
        }
        for(char ch = 'a'; ch <= 'z'; ++ch) {
            if(st.count(ch)) cout << ch;
        }
        cout << endl;
    }
    return 0;
}