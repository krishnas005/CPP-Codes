#include <bits/stdc++.h>
using namespace std;

struct segmentTree {
    int n;
    vector<int> tree;

    void init(int _n) {
        this->n = _n;
        tree.resize(4 * n, 0);
    }

    int comb(int a, int b) {
        // Range sum operation
        return a + b;
    }

    void build(int start, int end, int currIdx, vector<int>& arr) {
        if (start == end) {
            tree[currIdx] = arr[start];
            return;
        }
        int mid = (start + end) / 2;
        build(start, mid, 2 * currIdx + 1, arr);
        build(mid + 1, end, 2 * currIdx + 2, arr);
        tree[currIdx] = comb(tree[2 * currIdx + 1], tree[2 * currIdx + 2]);
    }

    int query(int start, int end, int l, int r, int currIdx) {
        if (r < start || l > end) return 0;  // No overlap
        if (l <= start && r >= end) return tree[currIdx];  // Complete overlap
        int mid = (start + end) / 2;
        int q1 = query(start, mid, l, r, 2 * currIdx + 1);
        int q2 = query(mid + 1, end, l, r, 2 * currIdx + 2);
        return comb(q1, q2);
    }

    void update(int start, int end, int node, int index, int val) {
        if (start == end) {
            tree[node] = val; 
            return;
        }
        int mid = (start + end) / 2;
        if (index <= mid) {
            update(start, mid, 2 * node + 1, index, val);
        } else {
            update(mid + 1, end, 2 * node + 2, index, val);
        }
        tree[node] = comb(tree[2 * node + 1], tree[2 * node + 2]);
    }

    // Finds the k-th element in the segment tree
    int walk(int start, int end, int node, int sum, int wantSum) {
        if (start == end) return start;
        int mid = (start + end) / 2;
        if (sum + tree[2 * node + 1] >= wantSum) {
            return walk(start, mid, 2 * node + 1, sum, wantSum);
        } else {
            return walk(mid + 1, end, 2 * node + 2, sum + tree[2 * node + 1], wantSum);
        }
    }

    void build(vector<int>& arr) {
        build(0, n - 1, 0, arr);
    }

    int query(int l, int r) {
        return query(0, n - 1, l, r, 0);
    }

    void update(int index, int val) {
        update(0, n - 1, 0, index, val);
    }

    int walk(int wantSum) {
        return walk(0, n - 1, 0, 0, wantSum);
    }
};

int main() {
    segmentTree st;
    st.init(10);
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    st.build(arr);
    
    cout << "Sum from index 0 to 9: " << st.query(0, 9) << endl;  // Output: 55
    
    st.update(2, -10);
    
    cout << "Sum from index 0 to 9 after update: " << st.query(0, 9) << endl;  // Output: 42

    return 0;
}