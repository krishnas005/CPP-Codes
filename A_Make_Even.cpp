#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        string n;
        cin >> n;
        if((n.back() - '0') % 2 == 0) {
            cout << 0 << endl;
            continue;
        }
        if((n[0] - '0') % 2 == 0) {
            cout << 1 << endl;
            continue;
        }
        int count2 = count(n.begin(), n.end(), '2');
        int count4 = count(n.begin(), n.end(), '4');
        int count6 = count(n.begin(), n.end(), '6');
        int count8 = count(n.begin(), n.end(), '8');
        if(count2 > 0 || count4 > 0 || count6 > 0 || count8 > 0) {
            cout << 2 << endl;
            continue;
        }
        cout << -1 << endl;
    }
    return 0;
}