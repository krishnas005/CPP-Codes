#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    multiset<long long> priceOfTicket;
    vector<int> customer(m);
    for(int i=0; i<n; ++i) {
        long long x;
        cin >> x;
        priceOfTicket.insert(x);
    }
    for(int i=0; i<m; ++i) {
        long long pricePaidByCustomer;
        cin >> pricePaidByCustomer;
        auto it = priceOfTicket.upper_bound(pricePaidByCustomer);
        if(it == priceOfTicket.begin()) {
            cout << -1 << endl;
            continue;
        } else {
            --it;
            cout << *it << endl;
            priceOfTicket.erase(it);
        }
    }
    return 0;
}