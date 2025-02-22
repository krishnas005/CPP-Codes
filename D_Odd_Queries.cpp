#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

struct segmentTree {
    int n;
    vector<int> tree;
    void init(int _n) {
        this->n = _n;
        tree.resize(4 * n, 0);
    }
    int comb(int a, int b) {
        return a + b;
    }
    void build(int start, int end, int currIdx, vector<int>& arr) {
        if(start == end) {
            tree[currIdx] = arr[start];
            return;
        }
        int mid = (start + end) / 2;
        build(start, mid, 2 * currIdx + 1, arr);
        build(mid + 1, end, 2 * currIdx + 2, arr);
        tree[currIdx] = comb(tree[2 * currIdx + 1], tree[2 * currIdx + 2]);
    }
    int query(int start, int end, int l, int r, int idx) {
        if(r < start || l > end) {
            return 0;
        }
        if(l <= start && r >= end) {
            return tree[idx];
        }
        int mid = (start + end) / 2;
        int q1 = query(start, mid, l, r, 2 * idx + 1);
        int q2 = query(mid + 1, end, l, r, 2 * idx + 2);
        return comb(q1, q2);
    }
    int query(int l, int r) {
        return query(0, n - 1, l, r, 0);
    }
};

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for(int& i: a) cin >> i;
        int totalSum = accumulate(a.begin(), a.end(), 0);
        segmentTree st;
        st.init(n);
        st.build(0, n - 1, 0, a);
        while(q--) {
            int l, r, k;
            cin >> l >> r >> k;
            --l; --r;
            int rangeSum = st.query(l, r);
            int newSum = totalSum - rangeSum + (r - l + 1) * k;
            if(newSum & 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}