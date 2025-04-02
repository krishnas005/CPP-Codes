#include <bits/stdc++.h>
using namespace std;

vector<int> parent;
int find(int x) {
    if(parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}
bool unions(int x, int y) {
    int x_parent = find(x);
    int y_parent = find(y);
    if(x_parent == y_parent) return false;
    parent[y_parent] = x_parent;
    return true;
}
int main() {
    int n, m;
    cin >> n >> m;
    parent.resize(n+1);
    for(int i=1; i<=n; i++) parent[i] = i;
    int ans = 0;
    for(int i=0; i<m; i++) {
        int u, v;
        cin >> u >> v;
        if(!unions(u, v)) ans++; 
    }
    cout << ans << endl;
    return 0;
}