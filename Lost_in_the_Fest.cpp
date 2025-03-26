#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> arr(N);
        for(int& it: arr) cin >> it;
        int htt = arr[N-1];
        int idx = -1; 
        for(int i=0; i<N-1; i++){
            if(arr[i] >= htt){
                if(idx == -1) idx = i;
                else idx = min(idx, i);
            }
        }
        if(idx == -1) cout << 0 << endl;
        else cout << (N - 1 - idx) << endl;
    }
    return 0;
}