class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool in = false;
        bool de = false;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
               in = true;
            }
         if(nums[i-1]>nums[i] ){
               de = true;
            }
      
        }
            return !(in && de);
    }
};