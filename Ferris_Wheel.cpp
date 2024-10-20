#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> weights(n);
    for(int i=0; i<n; ++i) cin >> weights[i];
    int count = 0;   
    sort(weights.rbegin(), weights.rend());
    int i = 0;
    int j = n-1;
    while(i <= j) {
        if(weights[i] + weights[j] <= x) {
            ++i;
            --j;
        }
        else ++i;
        ++count;
    }
    cout << count << endl;
    return 0;
}