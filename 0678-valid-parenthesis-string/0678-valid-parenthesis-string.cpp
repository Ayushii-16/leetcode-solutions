class Solution {
public:
    bool checkValidString(string s) {
        int n = s.length();
        stack<int>openst;
        stack<int>starst;
        for(int i=0;i<n;i++){
            if(s[i] == '(') openst.push(i);
             if(s[i] == '*') starst.push(i);
            if(s[i] == ')') {
                if(!openst.empty()) openst.pop();
                else if(!starst.empty()) starst.pop();
                else return false;
            }
        }
        while(!openst.empty() && !starst.empty()){
            if(openst.top() > starst.top()) return false;
            openst.pop();
            starst.pop();
        }
        return openst.empty();
    }
};