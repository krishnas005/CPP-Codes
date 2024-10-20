#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> desiredSize(n);
    for(int i=0; i<n; ++i) cin >> desiredSize[i];
    vector<int> availableSize(m);
    for(int i=0; i<m; ++i) cin >> availableSize[i];
    int count = 0;
    sort(desiredSize.begin(), desiredSize.end());
    sort(availableSize.begin(), availableSize.end());
    int i = 0, j = 0;
    while(i<n && j<m) {
        if(desiredSize[i]-k <= availableSize[j] && desiredSize[i]+k >= availableSize[j]) {
            ++count;
            ++i;
            ++j;
        }
        else if(desiredSize[i] > availableSize[j]) ++j;
        else ++i;
    }
    cout << count << endl;
    return 0;
}