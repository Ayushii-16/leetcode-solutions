class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string str = "";
        for(auto i : s){
            if(!st.empty() && i == st.top()) {
                st.pop();
            }
            else st.push(i);
        }
        
        while(!st.empty()){
            str.push_back(st.top());
            st.pop();
        }

        reverse(str.begin(),str.end());
        return str;
    }
};