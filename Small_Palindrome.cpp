#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
	    int X, Y;
	    cin >> X >> Y;
	    string ans = "";
	    int a = X / 2;
	    while(a--) {
	        ans += "1";
	    }
	    while(Y--) ans += "2";
	    a = X / 2;
	    while(a--) ans += "1";
	    cout << ans << endl;
	}
	return 0;
}
