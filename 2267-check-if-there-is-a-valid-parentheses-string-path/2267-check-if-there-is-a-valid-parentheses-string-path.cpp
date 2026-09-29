class Solution {
public:

        vector<vector<vector<int>>> memo;

    bool solve(vector<vector<char>>& grid,int i,int j,int open,int close){

     if( i >= grid.size() || j >= grid[0].size() ){
        return false;
     }
     

     if(grid[i][j] == '(' ) open++;
     else close++;



     if(close > open) return false;

     if(i == grid.size()-1 && j == grid[0].size()-1){
        return open == close;
     }
      if (memo[i][j][open] != -1) {
            return memo[i][j][open];
        }
 
   return memo[i][j][open] =  solve(grid,i,j+1,open,close) ||
     solve(grid,i+1,j,open,close);


    }

    bool hasValidPath(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

       memo.assign(m, vector<vector<int>>(n, vector<int>(200, -1)));
                 return  solve(grid,0,0,0,0);
                 
    }
};