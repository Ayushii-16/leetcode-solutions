class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        vector<pair<int,int>>o1;
        vector<pair<int,int>>o2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(img1[i][j] == 1) o1.push_back({i,j});
                if(img2[i][j] == 1) o2.push_back({i,j});
            }
        }

        int s[61][61] = {0};
        int count = 0;

        for(auto& p1 : o1){
            for(auto& p2 : o2){
                int row = p1.first - p2.first + 30;
                int col = p1.second - p2.second + 30;
                s[row][col]++;
                count = max(count,s[row][col]);
            }
        }
          return count;
    }
};