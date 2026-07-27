class Solution {
public:

    int solve(vector<int>&nums,int sum,vector<vector<bool>>&v){
        for(int i=1;i<v.size();i++){
            for(int j=1;j<v[0].size();j++){
              if(nums[i-1] <= j){
             v[i][j] = v[i-1][j - nums[i-1]] || v[i-1][j];
        }  
           else v[i][j] = v[i-1][j];
            }
        }
        
        return v[nums.size()][sum];
    }

    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        if(sum%2 != 0) return false;
        vector<vector<bool>>v(nums.size()+1,vector<bool>((sum/2)+1,false));
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                if(j == 0) v[i][j] = true;
            }
        }
        return solve(nums,sum/2,v);
    }
};