#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        int count = 0;
        for(int i=0; i<n; ++i) {
            int x;
            cin >> x;
            if(x&1) count++;
        }
        if(count%2 == 0) cout << "YES" << endl;
        else cout<<"NO" << endl;
    }
}