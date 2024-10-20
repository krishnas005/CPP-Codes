#include <bits/stdc++.h>
using namespace std;

long long SolveKannu06(int n, int k, vector<int>& cans) {
    // best case mn min k toh lgenge hee
    int ans = k;
    // harr value sa kitne already use hochuke // 2 2 3 --> 0 0 1
    int toBeSubtracted = 0;
    sort(cans.begin(), cans.end());
    for(int i=0; i<n; ++i) {
        // subtract the already use from curr value
        cans[i] -= toBeSubtracted;
        // filhal a[i] ki jo val hai vo aage ke sbse nikaal lo or k sa minus krdo
        k -= min(k, (n-i) * cans[i]);
        if(k == 0) break;
        // just count number of failes attempts until k cans are taken
        else ++ans;
        toBeSubtracted += cans[i];
    } 
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;                            
        vector<int> cans(n);                      
        for (int i = 0; i < n; ++i) {
            cin >> cans[i];                
        }
        cout << SolveKannu06(n, k, cans) << endl;       
    }
    return 0;
}
