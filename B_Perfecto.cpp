#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool isPerfectSquare(int n) {
    if(n < 0) return false;
    int temp = static_cast<int> (sqrt(n));
    return temp * temp == n;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        int sum = ((n) * (n+1) / 2);
        if(isPerfectSquare(sum)) {
            cout << -1 << endl;
            continue;
        }
        vector<int> ans;
        int currSum = 0;
        int j = 1;
        while(j <= n) {
            if(j + 1 <= n && isPerfectSquare(currSum + j)) {
                ans.push_back(j + 1);
                currSum += (j + 1);
                ans.push_back(j);
                currSum += j;
                j += 2;
            } else {
                ans.push_back(j);
                currSum += j;
                j++;
            }
        }
        for(int& it: ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}