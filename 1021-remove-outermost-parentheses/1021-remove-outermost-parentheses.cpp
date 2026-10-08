class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        string ans = "";
        stack<int>st;
        st.push(-1);
        for(int i=1; i<n ;i++){
       if(s[i] == '(') {
         if(st.empty()){
            st.push(-1);
         }
         else{
           st.push(i);
           ans.push_back('(');
         }
       }
         if(s[i] == ')'){
            if(st.top() != -1){
                 ans.push_back(')');
                  st.pop();
                 }
            else st.pop();
         }

        }
        return ans;
    }
};