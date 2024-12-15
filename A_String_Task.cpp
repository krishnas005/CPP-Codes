#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='I' || ch=='O' || ch=='U' || ch=='Y' || ch=='y');
}

int main() {
    string s;
    cin >> s;
    string ans;
    for(int i = 0; i < s.size(); ++i) {
        char ch = tolower(s[i]);
        if(!isVowel(ch)) {
            cout << "." << ch;
        }
    }
    cout << ans;
    return 0;
}