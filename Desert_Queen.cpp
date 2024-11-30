#include <bits/stdc++.h>
using namespace std;

int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; // Directions for movement

// Check if the next position is valid and within the grid
bool isValid(int x, int y, int n, const vector<vector<char>>& grid) {
    return x >= 0 && x < n && y >= 0 && y < n && grid[x][y] != 'M'; // Not out of bounds and not blocked
}

// BFS function to find the minimum cost from start to end
int findMinCost(int n, vector<vector<char>>& grid, pair<int, int> start, pair<int, int> end) {
    queue<pair<int, int>> q;
    queue<int> costs; // Queue to store the cost for each position
    vector<vector<bool>> visited(n, vector<bool>(n, false)); // Visited array

    q.push(start);
    costs.push(0);
    visited[start.first][start.second] = true;

    while (!q.empty()) {
        auto curr = q.front();
        q.pop();
        int x = curr.first;
        int y = curr.second;
        int currentCost = costs.front();
        costs.pop();

        // If we reach the end, return the current cost
        if (x == end.first && y == end.second) {
            return currentCost;
        }

        // Explore all 4 directions (right, down, left, up)
        for (int d = 0; d < 4; d++) {
            int nx = x + dir[d][0];
            int ny = y + dir[d][1];

            // Check if the new position is valid
            if (isValid(nx, ny, n, grid) && !visited[nx][ny]) {
                // Add the cost (1 if it's 'D', 0 if it's 'T')
                int newCost = currentCost + (grid[nx][ny] == 'D' ? 1 : 0);
                q.push({nx, ny});
                costs.push(newCost);
                visited[nx][ny] = true;
            }
        }
    }

    return -1; // Return -1 if no valid path exists
}

int main() {
    int n;
    cin >> n; // Grid size

    vector<vector<char>> grid(n, vector<char>(n)); // Grid to store the map
    pair<int, int> start, end;

    // Read the grid and identify 'S' (start) and 'E' (end) positions
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'S') start = {i, j};
            if (grid[i][j] == 'E') end = {i, j};
        }
    }

    // Find the minimum cost to reach from 'S' to 'E'
    int result = findMinCost(n, grid, start, end);
    cout << result << endl; // Output the result

    return 0;
}
