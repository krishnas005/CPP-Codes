#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> arr(4);
    for(int i=0; i<s.size(); ++i) {
        arr[s[i] - 'A']++;
    }
    int maxx = INT_MIN;
    int maxChar = -1;
    for(int i=0; i<26; ++i) {
        if(arr[i] > maxx) {
            maxx = arr[i];
            maxChar = i;
        }
    }
    char c = maxChar + 'A';
    string ans = "";
    for(int i=0; i<maxx+1; ++i) {
        ans += c;
    }
    cout << ans << endl;
    return 0;
}