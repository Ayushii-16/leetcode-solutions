class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        int left = 0;
        int right = 0;
        int max_length  = 0;
        for(int i = 0;i < n ;i++){
            if(s[i] == '(') left++;
            else right++;
            if(left == right) max_length = max(max_length,2*right);
            if(right > left) left = right = 0;
        }

        left = right = 0;

          for(int i = n-1;i >= 0 ;i--){
            if(s[i] == '(') left++;
            else right++;
            if(left == right) max_length = max(max_length,2*left);
            if(right < left) left = right = 0;
        }
        return max_length;
    }
};