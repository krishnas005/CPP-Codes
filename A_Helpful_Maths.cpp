#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> arr;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+') {
            arr.push_back(s[i] - '0');
        }
    }
    sort(arr.begin(), arr.end());
    string ans = "";
    for(int i=0; i<arr.size(); ++i) {
        ans += to_string(arr[i]);
        if (i < arr.size() - 1) { 
            ans += "+";
        }
    }
    cout << ans << endl;
    return 0;
}