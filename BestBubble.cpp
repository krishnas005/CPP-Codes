#include <bits/stdc++.h>
using namespace std;

int countSwaps(vector<int>& arr, bool ascending) {
    int n = arr.size();
    vector<pair<int, int>> pos(n);
    
    for (int i = 0; i < n; ++i) {
        pos[i] = {arr[i], i};  
    }

    if (ascending) {
        sort(pos.begin(), pos.end());  
    } else {
        sort(pos.rbegin(), pos.rend()); 
    }
    vector<bool> visited(n, false);  
    int swapCount = 0;
    for (int i = 0; i < n; ++i) {
        if (visited[i] || pos[i].second == i) continue; 
        int cycleSize = 0;
        int j = i;
        while (!visited[j]) {
            visited[j] = true;
            j = pos[j].second;
            cycleSize++;
        }
        if (cycleSize > 1) {
            swapCount += cycleSize - 1;
        }
    }
    return swapCount;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    vector<int> ascArr = arr, descArr = arr;
    int ascSwaps = countSwaps(ascArr, true);
    int descSwaps = countSwaps(descArr, false);
    cout << min(ascSwaps, descSwaps) << endl;
    return 0;
}
