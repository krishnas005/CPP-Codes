#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int totalCount = count(arr.begin(), arr.end(), 2);
        int leftCount = 0;

        bool flag = false;
        for(int i = 0; i < n; ++i) {
            if(arr[i] == 2) ++leftCount;
            if(leftCount == totalCount - leftCount) {
                cout << i + 1 << endl;
                flag = true;
                break;
            }
        }

        if(!flag) cout << -1 << endl;
    }
    return 0;
}
