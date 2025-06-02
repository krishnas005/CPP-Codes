#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& it: arr) cin >> it;
    multiset<int> st;
    for(int it: arr) {
        auto itt = st.upper_bound(it);
        if(itt != st.end()) {
            st.erase(itt);
        }
        st.insert(it);
    }
    cout << st.size();
    return 0;
}