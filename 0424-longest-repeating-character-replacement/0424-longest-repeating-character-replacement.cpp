class Solution {
public:
    int characterReplacement(string s, int k) {
        
      int ans = 0;
      int n = s.length();
      if(n == 1) return 1;
      if(n == 0) return 0;
      map<char,int>m;
      int mx = 1;
      int i = 0;
      m[s[i]]++;
      int j = 1;
      
      while(j < n){
        m[s[j]]++;
        mx = max(mx,m[s[j]]);
        int nx = (j-i+1) - mx ;
      if( k < nx){
        m[s[i]]--;
        i++;
        }
        ans = max(ans,j-i+1);
        j++;
      }
      return ans;
    }
};