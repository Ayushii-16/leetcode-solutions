class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int fresh = 0;
        int count = 0;
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 2) q.push(make_pair(i,j));
                if(grid[i][j] == 1) fresh++;
            }
        }

       if (fresh == 0) return 0;

        int dx[4] = {-1,1,0,0};
        int dy[4] = {0,0,-1,1};

        while(!q.empty()){

           int size = q.size();
           bool rot = false;

           for(int i = 0;i<size;i++){

              pair<int,int>p = q.front();
              q.pop();

              for(int k=0;k<4;k++){
                int x = p.first + dx[k];
                int y = p.second + dy[k];

                if(x >= 0 && y >= 0 && x < grid.size() && y < grid[0].size() && grid[x][y] == 1){
                    grid[x][y] = 2;
                    q.push(make_pair(x,y));
                    fresh--;
                    rot = true;
                }
              }
              
           }
              if(rot) count++;       
        }
          if (fresh == 0) return count ;
          else return -1;
    }
};