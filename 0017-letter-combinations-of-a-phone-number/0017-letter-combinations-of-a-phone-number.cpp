class Solution {
public:

    void solve(string digits,int i,vector<string>key,string curr,vector<string>&res){
        if(i == digits.size()){
            res.push_back(curr);
            return;
        }
        int in = digits[i] - '0';
        string ch = key[in];

        for(int j = 0; j < ch.length();j++){
            curr.push_back(ch[j]);
            solve(digits,i+1,key,curr,res);
            curr.pop_back();
        }

    }

    vector<string> letterCombinations(string digits) {

         vector<string> key = {
        "",     "",     "abc",  "def", 
        "ghi",  "jkl",  "mno",  "pqrs", 
        "tuv",  "wxyz"
    };  
    
        vector<string>res;
        string curr = "";

        if(digits.empty()) return {};

     solve(digits,0,key,curr,res);
     return res;

    }
};