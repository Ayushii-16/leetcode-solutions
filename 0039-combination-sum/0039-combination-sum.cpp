class Solution {
public:

    void solve(vector<int>&candidates,int target,vector<vector<int>>&ans,vector<int>curr,int i,int sum){
        if(sum > target || i == candidates.size()) return ;
        if(sum == target){ 
            ans.push_back(curr);
             return;
            }
      
            curr.push_back(candidates[i]);
            solve(candidates,target,ans,curr,i,sum+candidates[i]);
            curr.pop_back();
        
             solve(candidates,target,ans,curr,i+1,sum);
        
    }
 
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>curr;
        int sum = 0;
        solve(candidates,target,ans,curr,0,sum);
        return ans;
    }
};