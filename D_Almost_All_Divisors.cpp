#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
		cin >> n;
		vector<int> arr(n);
		for(int i=0; i<n; ++i) {
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		int x = arr[0] * arr[n-1];
		vector<int> check;
		for(int i=2; i*1ll*i<=x; ++i) {
			if(x%i == 0) {
				check.push_back(i);
				if(i != x/i) {
					check.push_back(x/i);
				}
			}
		}
		sort(check.begin(), check.end());
		if(check == arr) {
			cout << x << endl;
		} else {
			cout << -1 << endl;
		}
    }
    return 0; 
}