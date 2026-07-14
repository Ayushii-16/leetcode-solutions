class Solution {
public:

    void solve(int n,string curr,vector<string> &ans,int open,int close){

         if(open == n && close == n){
            ans.push_back(curr);
            return;
         }


         if(open < n){
            curr.push_back('('); 
            solve(n,curr,ans,open+1,close);
            curr.pop_back();
         }

         if(close < open){
            curr.push_back(')'); 
            solve(n,curr,ans,open,close+1);
            curr.pop_back();
         }

    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string curr = "";
        solve(n,curr,ans,0,0);
        return ans;
    }
};