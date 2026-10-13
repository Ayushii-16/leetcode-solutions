class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(auto &i : nums){
            i = abs(i);
        }
        
        sort(nums.rbegin(), nums.rend());
        
        int n = nums.size();
        int cal = 0;
        
        if(n % 2 == 0) {
            cal = n / 2;
        } else {
            cal = (n + 1) / 2;
        }
        
        long long ans = 0; 
        
        for(int i = 0; i < n; i++){
            long long square_val = (long long)nums[i] * nums[i];
            if(i < cal) {
                ans += square_val;
            } else {
                ans -= square_val;
            }
        }
        
        return ans;
    }
};
