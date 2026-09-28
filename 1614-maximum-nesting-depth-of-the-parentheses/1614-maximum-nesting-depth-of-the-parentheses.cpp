class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int open = 0;
        int close = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                if(close != 0){
                    ans = max(ans,open);
                    close--;
                    open--;
                }
                open++;
            }
            if(s[i] == ')'){
                close++;
            }
        }
          ans = max(ans,open);
        return ans;
    }
};