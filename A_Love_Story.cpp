#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        string wants = "codeforces";
        int n = s.size();
        int count = 0;
        for(int i=0; i<n; ++i) {
            if(s[i] != wants[i]) ++count;
        }
        cout << count << endl;
    }
}