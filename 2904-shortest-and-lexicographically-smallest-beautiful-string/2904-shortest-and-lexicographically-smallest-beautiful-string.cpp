class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string result = "";
      
        
        int i = 0;
       int c = 0;
        int j = 0;
        while(j < s.length()){
         
           if(s[j] == '1') c++;
          while(c == k){
             string ans = s.substr(i, j - i + 1);
            if(result == "" || ans.length() < result.length())
                  result = ans;
                  else if(ans.length() ==  result.length())
                        result = min(ans,result);
             if(s[i] == '1') c--;
         i++;
          }
          j++;
        }
        return result;
    }
};