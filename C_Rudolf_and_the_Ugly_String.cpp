#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int countOccurrences(const string &s, const string &target) {
    int count = 0;
    for (size_t pos = 0; (pos = s.find(target, pos)) != string::npos; ++pos) {
        count++;
    }
    return count;
}
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
        int countMap = countOccurrences(s, "map");
        int countPie = countOccurrences(s, "pie");
        int countMapie = countOccurrences(s, "mapie");
        int count = countMap + countPie - countMapie; 
        // cout << countMapie << endl;
        cout << count << endl;
    }
    return 0;
}
