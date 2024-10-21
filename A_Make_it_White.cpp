#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i=0, j=n-1;
        for(i=0; i<n; ++i) {
            if(s[i] == 'B') {
                break;
            }
        }
        for(j=n-1; j>=0; --j) {
            if(s[j] == 'B') {
                break;
            }
        }
        cout << j-i+1 << endl;
    }
    return 0;
}