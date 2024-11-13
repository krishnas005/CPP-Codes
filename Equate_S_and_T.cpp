#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T-- > 0) {
        int N, M;
        cin >> N >> M;
        string S, T;
        cin >> S >> T;
        string ss, tt;
        for (char& c : S) {
            ss.push_back(c);
            if (ss.size() >= 2 && ss[ss.size() - 2] == 'a' && ss[ss.size() - 1] == 'b') {
                ss.pop_back();  
            }
        }
        for (char& c : T) {
            tt.push_back(c);
            if (tt.size() >= 2 && tt[tt.size() - 2] == 'a' && tt[tt.size() - 1] == 'b') {
                tt.pop_back();
            }
        }
        if (ss == tt) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
