#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool isPalindrome(const string& s) {
    string t = s;
    reverse(t.begin(), t.end());
    return t == s;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for(auto& it : arr) cin >> it;
    set<int> st;
    vector<pair<int, int>> ans;
    int idx = -1;
    for(int i=0; i<n; ++i) {
        if(st.count(i)) continue;
        string rev = arr[i];
        reverse(rev.begin(), rev.end());
        bool found = false;
        for(int j=i+1; j<n; ++j) {
            if(st.count(j)) continue;
            if(arr[j] == rev) {
                ans.push_back({i, j});
                st.insert(i);
                st.insert(j);
                found = true;
                break;
            }
        }
    }
    for(int i=0; i<n; ++i) {
        if(!st.count(i) && isPalindrome(arr[i])) {
            idx = i;
            break;
        }
    }
    string result = "";
    for(auto& p : ans) {
        result += arr[p.first];
    }
    if(idx != -1) {
        result += arr[idx];
    }
    for(auto it = ans.rbegin(); it != ans.rend(); ++it) {
        result += arr[it->second];
    }
    cout << result.size() << endl;
    cout << result << endl;
    return 0;
}