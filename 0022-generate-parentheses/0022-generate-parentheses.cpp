class Solution {
public:

    void solve(int n,vector<string>&ans,string curr,int open,int close){
        if(open == close && open == n){
            ans.push_back(curr);
        }

        if(open < n){
            curr.push_back('(');
            solve(n,ans,curr,open+1,close);
            curr.pop_back();
        }
        if(close < open){
            curr.push_back(')');
           solve(n,ans,curr,open,close+1);
           curr.pop_back();
        }
    }
    

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int open = 0;
        int close = 0;
        string curr = "";
        solve(n,ans,curr,open,close);
        return ans;
    }
};