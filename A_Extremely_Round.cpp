#include <bits/stdc++.h>
using namespace std;

bool check(int a) {
    int count = 0;
    while(a > 0) {
        int d = a % 10;
        if(d != 0) ++count;
        a = a / 10;
    }
    return count == 1;
}
set<int> st;
void precompute() {
    for(int i = 1; i < 1e7; ++i) {
        if(check(i)) {
            st.insert(i);
        }
    }
}

int main() {
    precompute();  
    int T;
    cin >> T;
    while(T--) {
        int x;
        cin >> x;
        int ans = 0;
        for(auto it: st) {
            if(it <= x) ++ans;  
            else break;   
        }
        cout << ans << endl;
    }
    return 0;  
}
