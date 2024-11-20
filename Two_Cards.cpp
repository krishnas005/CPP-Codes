#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int numCards;
        cin >> numCards;
        vector<pair<int, int>> cards(numCards);
        for (int i = 0; i < numCards; ++i) {
            cin >> cards[i].first; 
        }
        for (int i = 0; i < numCards; ++i) {
            cin >> cards[i].second; 
        }
        sort(cards.rbegin(), cards.rend());
        bool flag = false;
        for (int idx = 0; idx < numCards; ++idx) {
            int aliceFront = cards[idx].first;
            int aliceBack = cards[idx].second;
            int bobFront = (idx == 0) ? cards[1].first : cards[0].first;
            int bobBack = (idx == 0) ? cards[1].second : cards[0].second;
            if (max(aliceFront, aliceBack) > max(bobFront, bobBack)) flag = true;
        }
        if (flag) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
