class Solution {
public:

    void solve(int k,int target,vector<vector<int>> &ans,vector<int>&curr,int sum,int i){

       if(sum > target || curr.size() > k) return;

      if(sum == target){
         if(curr.size() == k) {
        ans.push_back(curr);
          } 
          return;
       }

       for(int j = i;j <= 9;j++){
               curr.push_back(j);
               solve(k,target,ans,curr,sum + j,j+1);
               curr.pop_back();
       }

    }

    vector<vector<int>> combinationSum3(int k, int n) {
        
         vector<vector<int>>ans;
         vector<int>curr;
         int sum = 0;
         solve(k,n,ans,curr,sum,1);
         return ans;

    }
};