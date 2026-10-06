class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>open;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') open.push(i);
           else{
            if(!open.empty()) open.pop();
            else ans++;
           } 
        }
        ans += open.size();
        return ans;
    }
};