class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>v(nums.size());
        int mn = nums[nums.size()-1];
        for(int i = nums.size()-1;i>=0;i--){
            mn = min(nums[i],mn);
            v[i] =  mn;
        }
        int mx = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            mx = max(nums[i],mx);
            if(mx-v[i] <= k) return i;
        }
        return -1;
    }
};