class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        int ans = 0;

        for(int i = 0;i < n;i++){
            int ch = 123 - s[i];
            ans += ch * (i+1);
        }
          return ans;
      }
};