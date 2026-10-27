class Solution {
public:

    int solve(vector<int>&nums,int n,vector<int>&dp){
        if(n >= nums.size()) return 0;
        if(dp[n] != -1) return dp[n];
        int ans = nums[n] + solve(nums,n+2,dp);
        int skip = solve(nums,n+1,dp);
        
        dp[n] = max(ans,skip);
        return dp[n];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        return solve(nums,0,dp);
    }
};