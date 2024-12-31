#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> p(n+1);  
        for(int i=1; i<=n; ++i) cin >> p[i];
        int ans = 0;
        set<int> st;
        vector<int> arr;
        for(int i=1; i<=n; ++i) {
            if(st.count(i)) continue;
            int len = 0;
            int curr = i;
            do {
                st.insert(curr);
                curr = p[curr];
                len++;
            } while(curr != i);
            arr.push_back(len);
        }
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
        while(pq.size() > 1) {
            int currSum = pq.top();
            pq.pop();
            currSum += pq.top();
            pq.pop();
            ans += currSum;
            pq.push(currSum);
        }
        cout << ans << endl;
    }
    return 0;
}