class Solution {
public:
    
    long long MOD = 1e9 + 7;
        vector<vector<long long>> table;

    long long solve(vector<int>& nums){

        int n = nums.size();
         if( n <= 2) return 1;
         vector<int>left;
         vector<int>right;
         int root = nums[0];
         for(int i=1;i<n;i++){
            if(nums[i] < root) left.push_back(nums[i]);
            else right.push_back(nums[i]);
         }    
          

          long long leftside = solve(left);
          long long rightside = solve(right);

          long long currentways = table[left.size() + right.size()][left.size()];

          long long step = (currentways * leftside)%MOD;
          long long total = (step * rightside)%MOD;

          return total;

    }

    int numOfWays(vector<int>& nums) {

        int n = nums.size();
           
          table.assign(n + 1, vector<long long>(n + 1, 1));
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j < i; ++j) {
                table[i][j] = (table[i - 1][j - 1] + table[i - 1][j]) % MOD;
            }
        }


           long long ans = solve(nums);

           return (ans-1 + MOD)%MOD;

         
    }
};