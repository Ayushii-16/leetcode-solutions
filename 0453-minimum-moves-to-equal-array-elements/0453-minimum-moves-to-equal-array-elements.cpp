class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
         if (all_of(nums.begin(), nums.end(), [&](int x) { return x == nums[0]; })) {
            return 0;
        }
        
        int ans = 0;
        int mn = *min_element(nums.begin(),nums.end());
        for(auto i : nums){
            ans += i-mn;
        }
        return ans;

    }
};