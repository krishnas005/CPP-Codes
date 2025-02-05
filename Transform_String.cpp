#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
	    string A, B;
	    cin >> A >> B;
        vector<int> freq(26, 0);
        int ans = 0;
        for(int i=0; i<B.size(); ++i) {
            freq[B[i] - 'a']++;
        }
        int n1 = A.size(), n2 = B.size();
        vector<int> freq2(26, 0);
        for(int i=0; i<n1; ++i) {
            freq2[A[i] - 'a']++;
        }
        int i = 0, j = 0;
        while(i < n1 && j < n2) {
            if(A[i] == B[j]) j++;
            i++;
        }
        if(j < n2) {
            cout << -1 << endl;
            continue;
        }
        int count = 0;
        for(int i=0; i<n1; ++i) {
            if(freq[A[i] - 'a'] < 1 || freq2[A[i]-'a'] > freq[A[i] - 'a']) {
                freq2[A[i] - 'a']--;
                ans += i+1 - count;
                ++count;
            }
        }
        cout << ans << endl;
	}
    return 0;
}