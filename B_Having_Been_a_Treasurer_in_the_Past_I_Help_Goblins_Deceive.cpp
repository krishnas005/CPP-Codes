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
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count_dash = 0, count_underscore = 0;
        for(char& c : s) {
            if#include <bits/stdc++.h>
            using namespace std;
            #define int long long
            const int minn = 1e9;
            const int maxx = 1e9;
            #define endl '\n'
            
            int32_t main() {
                ios_base::sync_with_stdio(false);
                cin.tie(nullptr);
                cout.tie(nullptr);
                int T;
                cin >> T;
                while(T--) {
                    int n;
                    cin >> n;
                    string s;
                    cin >> s;
                    int count_dash = 0, count_underscore = 0;
                    for(char& c : s) {
                        if (c == '-') count_dash++;
                        else count_underscore++;
                    }
                    int temp = count_dash / 2;
                    int ans = count_underscore * temp * (count_dash - temp);
                    cout << ans << endl;
                }
                return 0;
            }
            else count_underscore++;
        }
        int temp = count_dash / 2;
        int ans = count_underscore * temp * (count_dash - temp);
        cout << ans << endl;
    }
    return 0;
}