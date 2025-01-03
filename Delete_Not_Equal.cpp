#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int zeroCount = 0;
	    int oneCount = 0;
        int count = 1;
	    for(int i=0; i<n; ++i) {
	        if(s[i] == '0') ++zeroCount;
	        if(s[i] == '1') ++oneCount;
	    }
	    if(zeroCount == n || oneCount == n) cout << n << endl;
	    else cout << 1 << endl;
	}
	return 0;
}