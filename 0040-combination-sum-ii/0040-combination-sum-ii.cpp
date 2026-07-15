class Solution {
public:

    void solve(vector<int> &candidates,int target, vector<vector<int>> &ans,vector<int>curr,int sum,int i){

        if( sum > target) return;

        if(sum == target){
            ans.push_back(curr);
            return;
        }
        
        for(int j = i;j < candidates.size();j++){
            if(j > i && candidates[j] == candidates[j-1]) continue;
        curr.push_back(candidates[j]);
        solve(candidates,target,ans,curr,sum + candidates[j],j + 1);
        curr.pop_back();
        }
        

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
         vector<vector<int>>ans;
         vector<int>curr;
         int sum = 0;
         solve(candidates,target,ans,curr,sum,0);
         return ans;

    }
};