#include <bits/stdc++.h>
using namespace std;
#define int long long
const int minn = 1e9;
const int maxx = 1e9;
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    vector<int> freq(26, 0);
    for(char& c: s) freq[c - 'A']++;
    bool flag = false;
    char ch = ' ';
    int count = 0;
    for(int i=0; i<26; ++i) {
        if(freq[i] % 2 == 1) {
            if(flag) {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            flag = true;
            ch = 'A' + i;
            count = freq[i];
        }
    }
    freq[ch - 'A'] = 0;
    string first_half = "", second_half = "", middle = "";
    for(int i = 0; i < 26; ++i) {
        string part(freq[i] / 2, 'A' + i); 
        first_half += part;
        second_half = part + second_half; 
    }
    if (flag) {
        middle = string(count, ch);
    }
    cout << first_half + middle + second_half << endl;
    return 0;
}