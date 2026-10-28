class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
         int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<bitset<1024>>> dp(m, vector<bitset<1024>>(n));
        
        dp[0][0].set(grid[0][0]);
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0 && j == 0) continue;
                
                bitset<1024> incoming;
                
                if (i > 0) {
                    incoming |= dp[i - 1][j];
                }
                if (j > 0) {
                    incoming |= dp[i][j - 1];
                }
                
                for (int k = 0; k < 1024; ++k) {
                    if (incoming.test(k)) {
                        dp[i][j].set(k ^ grid[i][j]);
                    }
                }
            }
        }
        
        for (int k = 0; k < 1024; ++k) {
            if (dp[m - 1][n - 1].test(k)) {
                return k;
            }
        }
        
        return 0;
    }
};