#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        int maxx = *max_element(begin(arr), end(arr));
        int minn = *min_element(begin(arr), end(arr));
        priority_queue<int> pq(arr.begin(), arr.end());
        if(maxx - 1 - minn > k) {
            cout << "Jerry" << endl;
            continue;
        }
        int a = pq.top();
        pq.pop();
        pq.push(a-1);
        if(pq.top() - minn > k) {
            cout << "Jerry" << endl;
            continue;
        }
        int sum = accumulate(begin(arr), end(arr), 0LL);
        if(sum&1) cout << "Tom" << endl;
        else cout << "Jerry" << endl;
    }
    return 0;
}