#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--){
        int N;
        int K;
        cin >> N >> K;
        vector<int> A(N), B(N);
        for(int& it: A) cin >> it;
        for(int& it: B) cin >> it;
        int temp = 0;
        vector<int> arr;
        for(int i=0; i<N; i++){
            int a = A[i];
            int b = B[i];
            int minn = min((b - a + 9) % 9, (a - b + 9) % 9);
            int maxx = max((b - a + 9) % 9, (a - b + 9) % 9);
            temp += minn;
            int maxDiff = maxx;
            if(minn == 0) maxDiff = 9;
            arr.push_back(maxDiff - minn);
        }
        if(temp > K) cout << "NO" << endl;
        else {
            temp = K - temp;
            if(temp % 2 == 0){
                cout << "YES" << endl;
            } else {
                bool flag = false;
                for(auto& it : arr){
                    if(it <= temp && ((temp - it) % 2 == 0)){
                        flag = true;
                        break;
                    }
                }
                if(flag) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
    }
    return 0;
}