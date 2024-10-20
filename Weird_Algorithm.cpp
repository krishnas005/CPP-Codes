#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> ans;
    ans.push_back(n);
    while (n != 1) {
        if (n % 2 == 1) n = n * 3 + 1;
        else n /= 2;
        ans.push_back(n);
    }
    for (auto i : ans) cout << i << " ";
    cout << endl;
    return 0;
}
