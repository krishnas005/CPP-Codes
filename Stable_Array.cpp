#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int& i: A) cin >> i;
        int ans = 0;
        stack<int> st; 
        for(int i=0; i<N; ++i) {
            while(!st.empty() && st.top()<A[i]){
                st.pop();
                ans++;
            }            
            st.push(A[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
