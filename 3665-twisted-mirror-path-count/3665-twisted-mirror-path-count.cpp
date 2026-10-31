class Solution {
public:
      
    int solve(vector<vector<int>>& grid,int i,int j,int dir, vector<vector<vector<int>>>& memo){
       if (i >= grid.size() || j >= grid[0].size()) {
            return 0;
        }

        if (i == grid.size() - 1 && j == grid[0].size() - 1) {
            return 1;
        }

         if (memo[i][j][dir] != -1) {
            return memo[i][j][dir];
        }

        if (grid[i][j] == 1) {
            if (dir == 0) {
                return memo[i][j][dir] = solve(grid, i + 1, j, 1,memo);
            } else if (dir == 1) {
                return memo[i][j][dir] = solve(grid, i, j + 1, 0,memo);
            }
        }

        long long paths = 0;
        paths += solve(grid, i + 1, j, 1,memo);
        paths += solve(grid, i, j + 1, 0,memo);

        return memo[i][j][dir] = paths % 1000000007;
    }

    int uniquePaths(vector<vector<int>>& grid) {
         int m = grid.size();
        int n = grid[0].size();
     vector<vector<vector<int>>> memo(m, vector<vector<int>>(n, vector<int>(3, -1)));
    return solve(grid,0,0,2,memo);
    }
};