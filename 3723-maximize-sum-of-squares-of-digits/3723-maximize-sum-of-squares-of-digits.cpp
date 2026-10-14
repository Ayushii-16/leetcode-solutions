class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
      if(sum > 9 * num) return ans;
      for(int i=0;i<num;i++){
         int x = min(9,sum);
         ans += to_string(x);
         sum -= x;
      }
      
        return ans;
    }
};