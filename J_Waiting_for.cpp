#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n; 
    cin >> n;
    vector<string> ans; 
    int peopleWaiting = 0; 
    for (int i=0; i<n; i++) {
        string eventType;
        cin >> eventType;
        if (eventType == "P") {
            int pi;
            cin >> pi;
            peopleWaiting += pi;
        } else if (eventType == "B") {
            int bi;
            cin >> bi;
            if (bi > peopleWaiting) {
                ans.push_back("YES"); 
            } else {
                ans.push_back("NO");
            }
            peopleWaiting = max(0LL, peopleWaiting-bi);
        }
    }
    for (string& it : ans) {
        cout << it << endl;
    }   
    return 0;
}