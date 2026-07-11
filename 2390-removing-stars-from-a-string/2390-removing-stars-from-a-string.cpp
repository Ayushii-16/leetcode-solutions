class Solution {
public:
    string removeStars(string s) {
        string str = "";
        stack<int>st;
        for(auto i : s){

            if(i == '*') {
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