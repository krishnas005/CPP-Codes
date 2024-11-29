
// Basic DSU Implementation
int find(int A[],int X) {
    if(A[X] == X) return X;
    return find(A, A[X]);
}
void unionSet(int A[],int X,int Y) {
	int x_parent = find(A, X);
	int y_parent = find(A, Y);
	if(x_parent != y_parent) {
	    A[x_parent] = y_parent;
	}
}


// DSU with path compression

vector<int> parent;
vector<int> rank;

int find(int x)
{
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}
void Union(int x, int y)
{
    int x_parent = find(x);
    int y_parent = find(y);
    if (rank[x_parent] > rank[y_parent])
    {
        parent[y_parent] = x_parent;
    }
    else if (rank[x_parent] < rank[y_parent])
    {
        parent[x_parent] = y_parent;
    }
    else
    {
        parent[x_parent] = y_parent;
        rank[y_parent]++;
    }
}
parent.resize(V);
for(int i=0; i<V; ++i) parent[i] = i;
rank.resize(V, 0);