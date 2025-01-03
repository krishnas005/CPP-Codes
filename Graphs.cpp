#include <bits/stdc++.h>
using namespace std;

// Depth First Search
void DFS(vector<vector<int>> &adj, vector<bool> &visited, vector<int> &ans, int start)
{
    if (visited[start])
        return;
    visited[start] = true;
    ans.push_back(start);
    for (auto &nbr : adj[start])
    {
        if (!visited[nbr])
        {
            DFS(adj, visited, ans, nbr);
        }
    }
}

vector<int> dfsOfGraph(vector<vector<int>> &adj)
{
    int start = 0;
    int n = adj.size();
    vector<int> ans;
    vector<bool> visited(n, false);
    DFS(adj, visited, ans, start);
    return ans;
}

// Breadth First Search
void BFS(int start, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &ans)
{
    queue<int> q;
    q.push(start);
    ans.push_back(start);
    visited[start] = true;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (int &nbr : adj[curr])
        {
            if (!visited[nbr])
            {
                q.push(nbr);
                ans.push_back(nbr);
                visited[nbr] = true;
            }
        }
    }
}

vector<int> bfsOfGraph(vector<vector<int>> &adj)
{
    int start = 0;
    int n = adj.size();
    vector<bool> visited(n, false);
    vector<int> ans;
    BFS(start, adj, visited, ans);
    return ans;
}

// Detect cycle in an undirected graph using DFS
bool isCycleDFS(int start, int parent, vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[start] = true;
    for (auto &nbr : adj[start])
    {
        if (nbr == parent)
            continue;
        if (visited[nbr])
            return true;
        if (isCycleDFS(nbr, start, adj, visited))
            return true;
    }
    return false;
}

// Detech cycle in an undirectedgraph using BFS
bool isCycleBFS(int start, int parent, vector<vector<int>> &adj, vector<bool> &visited)
{
    queue<pair<int, int>> q;
    q.push({start, -1});
    visited[start] = true;
    while (!q.empty())
    {
        auto curr = q.front();
        q.pop();
        int source = curr.first;
        int currParent = curr.second;
        for (auto &nbr : adj[source])
        {
            if (!visited[nbr])
            {
                visited[nbr] = true;
                q.push({nbr, source});
            }
            else if (nbr != currParent)
                return true;
        }
    }
    return false;
}

bool isCycleUndirected(vector<vector<int>> &adj)
{
    int n = adj.size();
    vector<bool> visited(n, false);
    int parent = -1;
    for (int i = 0; i < n; ++i)
    {
        // if(!visited[i] && isCycleDFS(i, parent, adj, visited)) return true;
        if (!visited[i] && isCycleBFS(i, parent, adj, visited))
            return true;
    }
    return false;
}

// Function for Detect cycle in a directed graph using DFS
bool isCycleDFSDirected(int start, vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &inRecursion)
{
    visited[start] = true;
    inRecursion[start] = true;
    for (auto &nbr : adj[start])
    {
        if (!visited[nbr] && isCycleDFSDirected(nbr, adj, visited, inRecursion))
        {
            return true;
        }
        else if (visited[nbr] && inRecursion[nbr])
        {
            return true;
        }
    }
    inRecursion[start] = false;
    return false;
}

// Detect cycle in a directed graph using DFS
bool isCyclicDirected(int V, vector<vector<int>> adj)
{
    vector<bool> visited(V, false);
    vector<bool> inRecursion(V, false);
    for (int i = 0; i < V; ++i)
    {
        if (!visited[i] && isCycleDFSDirected(i, adj, visited, inRecursion))
            return true;
    }
    return false;
}

// Detect cycle in a directed graph using BFS
bool isCyclicDirectedBFS(int V, vector<vector<int>> adj)
{
    vector<int> indegree(V, 0);
    for (int i = 0; i < V; ++i)
    {
        for (int j = 0; j < adj[i].size(); ++j)
        {
            indegree[adj[i][j]]++;
        }
    }
    int count = 0;
    queue<int> q;
    for (int i = 0; i < V; ++i)
    {
        if (indegree[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        ++count;
        for (auto &nbr : adj[curr])
        {
            indegree[nbr]--;
            if (indegree[nbr] == 0)
                q.push(nbr);
        }
    }
    return count != V;
}

void DFSTopologicalSort(vector<vector<int>> &adj, vector<int> &st, int start, vector<bool> &visited)
{
    visited[start] = true;
    for (auto &nbr : adj[start])
    {
        if (!visited[nbr])
        {
            DFSTopologicalSort(adj, st, nbr, visited);
        }
    }
    st.push_back(start);
}

// Topological sort using DFS
vector<int> topologicalSort(vector<vector<int>> &adj)
{
    vector<int> ans;
    int n = adj.size();
    vector<bool> visited(n, false);
    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
        {
            DFSTopologicalSort(adj, ans, i, visited);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

// Detect cycle in a directed graph using BFS (Kahn's Algorithm)
vector<int> topologicalSortBFS(vector<vector<int>> &adj)
{
    vector<int> ans;
    int n = adj.size();
    queue<int> q;
    vector<int> indegree(n, 0);
    for (int i = 0; i < adj.size(); ++i)
    {
        for (int j = 0; j < adj[i].size(); ++j)
        {
            indegree[adj[i][j]]++;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (indegree[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int curr = q.front();
        ans.push_back(curr);
        q.pop();
        for (auto &nbr : adj[curr])
        {
            indegree[nbr]--;
            if (indegree[nbr] == 0)
                q.push(nbr);
        }
    }
    return ans;
}

bool isBipartitesDFShelper(int start, vector<vector<int>> &adj, vector<int> &color, int currColor)
{
    color[start] = currColor;
    for (auto &nbr : adj[start])
    {
        if (currColor == color[nbr])
            return false;
        if (color[nbr] == -1)
        {
            int nextColor = 1 - currColor;
            if (isBipartitesDFShelper(nbr, adj, color, nextColor) == false)
                return false;
        }
    }
    return true;
}

bool isBipartiteDFS(vector<vector<int>> &adj)
{
    int n = adj.size();
    vector<int> color(n, -1);
    for (int i = 0; i < n; ++i)
    {
        if (color[i] == -1)
        {
            if (isBipartitesDFShelper(i, adj, color, 1) == false)
                return false;
        }
    }
    return true;
}

// Basic DSU Implementation
int find(int A[], int X)
{
    if (A[X] == X)
        return X;
    return find(A, A[X]);
}
void unionSet(int A[], int X, int Y)
{
    int x_parent = find(A, X);
    int y_parent = find(A, Y);
    if (x_parent != y_parent)
    {
        A[x_parent] = y_parent;
    }
}

// DSU with path compression
// vector<int> parent;
// vector<int> rank;
// int find(int x)
// {
//     if (parent[x] == x)
//         return x;
//     return parent[x] = find(parent[x]);
// }
// void Union(int x, int y)
// {
//     int x_parent = find(x);
//     int y_parent = find(y);
//     if (rank[x_parent] > rank[y_parent])
//     {
//         parent[y_parent] = x_parent;
//     }
//     else if (rank[x_parent] < rank[y_parent])
//     {
//         parent[x_parent] = y_parent;
//     }
//     else
//     {
//         parent[x_parent] = y_parent;
//         rank[y_parent]++;
//     }
// }
// parent.resize(V);
// for (int i = 0; i < V; ++i)
//     parent[i] = i;
// rank.resize(V, 0);


int main()
{
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
    for (int node : dfsResult)
    {
        cout << node << " ";
    }
    cout << endl;

    // Perform BFS
    vector<int> bfsResult = bfsOfGraph(adj);
    cout << "BFS Traversal: ";
    for (int node : bfsResult)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}