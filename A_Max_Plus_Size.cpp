#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; ++i) {
            cin >> arr[i];
        }
        int oddValue=0, oddCount=0;
        int evenValue=0, evenCount=0;
        for(int i=0; i<n; ++i) {
            if(i%2 == 0) {
                ++evenCount;
                evenValue = max(evenValue, arr[i]);
            } else {
                ++oddCount;
                oddValue = max(oddValue, arr[i]);
            }
        }
        int evenScore = evenCount + evenValue;
        int oddScore = oddCount + oddValue;
        cout << max(evenScore, oddScore) << endl;
    }
    return 0;
}