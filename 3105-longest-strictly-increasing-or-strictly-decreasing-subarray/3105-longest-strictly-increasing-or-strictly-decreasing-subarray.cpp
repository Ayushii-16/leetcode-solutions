class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int i  = 0;
        int ans = 0;
         if(all_of(nums.begin(),nums.end(),[&](int x){return x == nums[0];})){
            return 1;
        }
        for(int j = 1;j < n; j++){
            if(nums[j-1] < nums[j]){
                ans = max(ans,j-i+1);
                
            }
            else i = j;
        }
        int k = 0;
        for(int j = 1;j < n; j++){
            if(nums[j-1] > nums[j]){
                ans = max(ans,j-k+1);
                
            }
            else k = j;
        }
        return ans;
    }
};