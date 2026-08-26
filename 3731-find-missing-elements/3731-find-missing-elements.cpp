class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        vector<int>v;
        for(int i = 1;i < nums.size();i++){
            if(nums[i] == nums[i-1] ) continue;
             int current = nums[i-1] + 1;
            while (current < nums[i]) {
                v.push_back(current);
                current++;
            }
        }
        return v;
    }
};