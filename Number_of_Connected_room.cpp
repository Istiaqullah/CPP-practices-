#include <iostream>
#include <vector>
using namespace std;
/* 5 8
########
#..#...#
####.#.#
#..#...#
########
   */
void dfs(vector<vector<char>>& grid, int i, int j) {
    int m = grid.size();
    int n = grid[0].size();
    if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == '#')
        return;

    grid[i][j] = '#'; // mark as visited

    dfs(grid, i , j+1);
    dfs(grid, i, j - 1);
    dfs(grid, i+ 1, j );
    dfs(grid, i- 1, j );
}

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    vector<vector<char>> grid(m, vector<char>(n));

    cout << "Enter the grid (# or .):\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> grid[i][j];

    int count = 0;

    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            if (grid[i][j] == '.') {
                count++;
                dfs(grid, i, j);
            }

    cout << "Number of room: " << count << endl;
    return 0;
}

