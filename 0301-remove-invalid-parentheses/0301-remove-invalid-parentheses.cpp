class Solution {
public:

    void solve(string& s,unordered_set<string>& unique_ans,string curr,int open,int close,int i,int rmopen,int rmclose){

       if( i == s.length()){
            if(open == close && rmopen == 0 && rmclose == 0) { 
          unique_ans.insert(curr);
             }
             return;
       }

  
        if(s[i] == '('){   
        if(rmopen > 0)   solve(s,unique_ans,curr,open,close,i+1,rmopen-1,rmclose);
          solve(s,unique_ans,curr + '(',open+1,close,i+1,rmopen,rmclose);
        }

      else  if(s[i] == ')'){
            if(rmclose > 0)   solve(s,unique_ans,curr,open,close,i+1,rmopen,rmclose-1);
          if(open > close)
          solve(s,unique_ans,curr + ')',open,close+1,i+1,rmopen,rmclose);
        }
       else     solve(s,unique_ans,curr + s[i],open,close,i+1,rmopen,rmclose);

    }

    vector<string> removeInvalidParentheses(string s) {
       unordered_set<string> unique_ans;
        string curr = "";
        int open = 0;
        int close = 0;
        int rmopen = 0;
        int rmclose = 0;
        for (char c : s) {
            if (c == '(') {
                rmopen++;
            } else if (c == ')') {
                if (rmopen > 0) rmopen--;
                else rmclose++;
            }
        }

        solve(s,unique_ans,curr,open,close,0, rmopen,rmclose);
        return vector<string>(unique_ans.begin(), unique_ans.end());
    }
};