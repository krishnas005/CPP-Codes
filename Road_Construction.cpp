#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int components, max_size;

int find(int x, vector<int>& parent) {
    if(x == parent[x]) return x;
    else return parent[x] = find(parent[x], parent);
}

bool make_union(int a, int b, vector<int>& parent, vector<int>& size) {
    int a_parent = find(a, parent);
    int b_parent = find(b, parent);
    if(a_parent == b_parent) return false;
    if(size[a_parent] < size[b_parent]) swap(a_parent, b_parent);
    parent[b_parent] = a_parent;
    size[a_parent] += size[b_parent];
    max_size = max(max_size, size[a_parent]);
    --components;
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    components = n;
    max_size = 1;
    vector<int> parent(n+1);
    for(int i=1; i<=n; ++i) parent[i] = i;
    vector<int> size(n+1, 1);
    for(int i=0; i<m; ++i) {
        int a, b;
        cin >> a >> b;
        make_union(a, b, parent, size);
        cout << components << " " << max_size << endl;
    }
    return 0;
}