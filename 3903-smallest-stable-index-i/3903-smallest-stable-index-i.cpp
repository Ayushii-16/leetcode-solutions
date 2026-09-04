class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mx = INT_MIN;
        int ans = -1;
       int res = INT_MAX;
        for(int i =0;i<nums.size();i++){
            int mn = INT_MAX;
            int j = nums.size()-1;
            while(j >= i){
                mn = min(mn,nums[j]);
                j--;
            }
            mx  = max(mx,nums[i]);
           if(mx-mn <= k) return i;
        }

        return ans;
    }
};