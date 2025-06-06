#include<bits/stdc++.h>
using namespace std;

int main() {
    string txt = "abcedgfabcd";
    int n1 = txt.size();
    string pat = "abc";
    int n2 = pat.size();
    vector<int> LPS(n2, 0);
    vector<int> ans;
    // calculate LPS
    int len = 0;
    LPS[0] = 0;
    int i = 1;
    while(i < n2) {
        if(pat[i] == pat[len]) {
            ++len;
            LPS[i] = len;
            ++i;
        } else {
            if(len != 0) len = LPS[len-1];
            else {
                LPS[i] = 0;
                ++i;
            }
        }
    }

    // apply kmp
    i = 0;
    int j = 0;
    while(i < n1) {
        if(txt[i] == pat[j]) {
            ++i; ++j;
        }
        if(j == n2) {
            ans.push_back(i-n2);
            j = LPS[j-1];
        } 
        else if(txt[i] != pat[j]) {
            if(j != 0) {
                j = LPS[j-1];
            } else ++i;
        }
    }
    for(int& it: ans) cout << it << " ";
    return 0;
}