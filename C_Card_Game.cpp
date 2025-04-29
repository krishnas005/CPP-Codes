#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool solve(int i, int j, int n){
    if(i == 1 && j == n) return true;   
    if(i == n && j == 1) return false; 
    return i > j;                       
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        string s;
        cin >> n >> s;
        vector<int> A, B;
        for(int i=0; i<n; i++){
            (s[i] == 'A' ? A : B).push_back(i+1);
        }
        bool check = false;
        for(int it : A){
            bool flag = true;
            for(int bj : B){
                if(!solve(it, bj, n)){
                    flag = false;
                    break;
                }
            }
            if(flag){
                check = true;
                break;
            }
        }
        if(check) cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }
    return 0;
}