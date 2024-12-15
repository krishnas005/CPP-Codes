#include <iostream>
#include <vector>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int &it : arr) cin >> it;
        int totalSum = 0;
        int oddSum = 0, evenSum = 0;
        int oddCount = (n + 1) / 2;
        int evenCount = n / 2;
        for(int i=0; i<n; ++i) {
            totalSum += arr[i];
            if((i % 2) == 0) oddSum += arr[i];
            else evenSum += arr[i];
        }
        if(totalSum % n != 0) {
            cout << "NO\n";
            continue;
        }
        int temp = totalSum / n;
        if(oddSum == temp*oddCount && evenSum == temp*evenCount) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}