class Solution {
public:

    void solve(vector<vector<int>>& grid,int i ,int j,long long &sum){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0)  return;

        sum += grid[i][j];
        grid[i][j] = 0; 

        solve(grid,i,j+1,sum);
        solve(grid,i,j-1,sum);
        solve(grid,i+1,j,sum);
        solve(grid,i-1,j,sum);

    }

    int countIslands(vector<vector<int>>& grid, int k) {
        int ans = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] != 0){
                   long long sum = 0;
                    solve(grid,i,j,sum);
                    if(sum%k == 0) ans++;
                }
            }
        }
        return ans;
    }
};