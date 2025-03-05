#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        string A, B;
        cin >> A >> B;
        int count_0 = 0, count_1 = 0, flip_count = 0;
        for(int i=0; i<n; i++){
            if(A[i] == B[i]){
                if(A[i] == '0') count_0++;
                else count_1++;
            } else flip_count++;
        }
        bool flag = false;
        if(n % 2 == 1){
            if ((count_0 % 2 == 1 && count_1 % 2 == 0 && flip_count % 2 == 0) || (count_0 % 2 == 0 && count_1 % 2 == 1 && flip_count % 2 == 0) || (count_0 % 2 == 0 && count_1 % 2 == 0 && flip_count % 2 == 1)) {
                flag = true;
            }
        } else {
            if(count_0 % 2 == 0 && count_1 % 2 == 0 && flip_count % 2 == 0) flag = true;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}