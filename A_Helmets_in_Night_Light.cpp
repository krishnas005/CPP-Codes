#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Depth First Search
void DFS(vector<vector<int>>& adj, vector<bool>& visited, vector<int>& ans, int start) {
    if (visited[start]) return;
    visited[start] = true;
    ans.push_back(start);
    for (auto& nbr : adj[start]) {
        if (!visited[nbr]) {
            DFS(adj, visited, ans, nbr);
        }
    }
}

vector<int> dfsOfGraph(vector<vector<int>>& adj) {
    int start = 0;
    int n = adj.size();
    vector<int> ans;
    vector<bool> visited(n, false);
    DFS(adj, visited, ans, start);
    return ans;
}

// Breadth First Search
void BFS(int start, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& ans) {
    queue<int> q;
    q.push(start);
    ans.push_back(start);
    visited[start] = true;
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (int& nbr : adj[curr]) {
            if (!visited[nbr]) {
                q.push(nbr);
                ans.push_back(nbr);
                visited[nbr] = true;
            }
        }
    }
}

vector<int> bfsOfGraph(vector<vector<int>>& adj) {
    int start = 0;
    int n = adj.size();
    vector<bool> visited(n, false);
    vector<int> ans;
    BFS(start, adj, visited, ans);
    return ans;
}

// Detect cycle in an undirected graph using DFS
bool isCycleDFS(int start, int parent, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[start] = true;
    for(auto& nbr: adj[start]) {
        if(nbr == parent) continue;
        if(visited[nbr]) return true;
        if(isCycleDFS(nbr, start, adj, visited)) return true;
    }
    return false;
}

// Detech cycle in an undirectedgraph using BFS
bool isCycleBFS(int start, int parent, vector<vector<int>>& adj, vector<bool>& visited) {
    queue<pair<int, int>> q;
    q.push({start, -1});
    visited[start] = true;
    while(!q.empty()) {
        auto curr = q.front();
        q.pop();
        int source = curr.first;
        int currParent = curr.second;
        for(auto& nbr: adj[source]) {
            if(!visited[nbr]) {
                visited[nbr] = true;
                q.push({nbr, source});
            }
            else if(nbr != currParent) return true;
        }
    }
    return false;
}

bool isCycle(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<bool> visited(n, false);
    int parent = -1;
    for(int i=0; i<n; ++i) {
        // if(!visited[i] && isCycleDFS(i, parent, adj, visited)) return true;
        if(!visited[i] && isCycleBFS(i, parent, adj, visited)) return true;
    }
    return false;
}

// Detect cycle in a directed graph using DFS
bool isCycleDFSDirected(int start, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& inRecursion) {
    visited[start] = true;
    inRecursion[start] = true;
    for(auto& nbr: adj[start]) {
        if(!visited[nbr] && isCycleDFSDirected(nbr, adj, visited, inRecursion)) {
            return true;
        }
        else if(visited[nbr] && inRecursion[nbr]) {
            return true;
        }
    }
    inRecursion[start] = false;
    return false;
}

bool isCyclicDirected(int V, vector<vector<int>> adj) {
    vector<bool> visited(V, false);
    vector<bool> inRecursion(V, false);
    for(int i=0; i<V; ++i) {
        if(!visited[i] && isCycleDFSDirected(i, adj, visited, inRecursion)) return true;
    }
    return false;
}

int main() {
    // Number of vertices
    int V = 5;
    // Adjacency list representation of the graph
    vector<vector<int>> adj(V);

    // Adding edges to the graph (undirected graph)
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0};
    adj[3] = {1};
    adj[4] = {1};

    // Perform DFS
    vector<int> dfsResult = dfsOfGraph(adj);
    cout << "DFS Traversal: ";
    for (int node : dfsResult) {
        cout << node << " ";
    }
    cout << endl;

    // Perform BFS
    vector<int> bfsResult = bfsOfGraph(adj);
    cout << "BFS Traversal: ";
    for (int node : bfsResult) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
