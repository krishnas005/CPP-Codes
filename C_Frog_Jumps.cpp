#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        s = "R" + s + "R";  
        int ans = 0;
        int lastR = 0;
        for(int i=1; i<s.length(); ++i) {
            if(s[i] == 'R') {
                ans = max(ans, i - lastR);
                lastR = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}