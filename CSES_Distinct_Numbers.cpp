#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<int> st;
    for(int i=0; i<n; ++i) {
        int a = 0;
        cin >> a;
        st.insert(a);
    }
    cout << st.size() << endl;
    return 0;
}