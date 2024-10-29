#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> zeroIdx;
        vector<int> oneIdx;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '0') zeroIdx.push_back(i);
            else oneIdx.push_back(i);
        }
        reverse(oneIdx.begin(), oneIdx.end());
        int pzi = zeroIdx.size() - 1;
        int poi = oneIdx.size() - 1;
        int total = n * (n + 1) / 2;
        for (int i = n - 1; i >= 0; i--)
        {
            while (pzi >= 0 && zeroIdx[pzi] >= i)
                pzi--;
            while (poi >= 0 && oneIdx[poi] >= i)
                poi--;

            if (s[i] == '1')
            {
                if (pzi >= 0)
                {
                    total -= (i + 1);
                    pzi--;
                }
                else if (poi >= 0)
                {
                    total -= (i + 1);
                    poi--;
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}
