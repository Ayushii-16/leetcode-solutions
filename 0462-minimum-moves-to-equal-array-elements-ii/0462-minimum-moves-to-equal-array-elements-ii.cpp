class Solution {
public:
    int minMoves2(vector<int>& nums) {
        if(all_of(nums.begin(),nums.end(),[&](int x){return x == nums[0];})){
            return 0;
        }

        sort(nums.begin(),nums.end());
        
         int ans = 0;
         int n = nums.size();
         int mid = nums[n/2];
         for(auto i : nums){
            ans += abs(i-mid);
         }
         return ans;

    }
};