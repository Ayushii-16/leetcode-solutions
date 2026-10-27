class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n  = nums.size();
        double sum = 0;
         
         if(k > n)   return 0;
         if(k == 1 && n == 1)  return nums[0];

        for(int i = 0;i < k;i++){
            sum += nums[i];
        }
      double  avg = sum/k;
        
        if(k == n)  return avg;

      int i=0;
      for(int j=k;j<n;j++){
         
          sum = sum + nums[j] - nums[i];
          i++;
        double init_ans = sum/k;
          avg = max(init_ans,avg);
       }
       return avg;
    }
};