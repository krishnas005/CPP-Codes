#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> degree(n+1, 0);
        vector<pair<int,int>> edges;
        for(int i = 0; i < n-1; ++i) {
            int u,v;
            cin >> u >> v;
            degree[u]++;
            degree[v]++;
            edges.push_back({u,v});
        }
        int max_components = 0;
        // Check maximum degree of any node
        for(int i = 1; i <= n; ++i) {
            if(degree[i] > max_components) {
                max_components = degree[i];
            }
        }
        // Check maximum sum of degrees of two connected nodes minus 2
        for(auto &edge : edges) {
            int u = edge.first;
            int v = edge.second;
            int connected_components = degree[u] + degree[v] - 2;
            if(connected_components > max_components) {
                max_components = connected_components;
            }
        }
        cout << max_components << '\n';
    }
    return 0;
}
