class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int i = 1;
        int c = 0;
        while(i < nums.size()-1){

             if(nums[i] == nums[i-1]) continue;
             int j = i+1;
             while(j < nums.size() && nums[i] == nums[j]){
                j++;
             }
             if(j == nums.size()) break;

            if(nums[i-1] < nums[i] && nums[i] > nums[j]){
                c++;
                
            }
            else if(nums[i-1] > nums[i] && nums[i] < nums[j]){
                c++;
            }
            
            i++;
        }
               return c;
    }
};