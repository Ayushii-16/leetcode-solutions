class Solution {
public:
    int smallestIndex(vector<int>& nums) {
    
    for(int i=0;i<nums.size();++i){
        int j = 0;
       while(nums[i] > 0){
        int n = nums[i]%10;
        j+= n;
        nums[i] = nums[i]/10;
       }
        if(i == j) return i;
    }
   return -1;
    }
};