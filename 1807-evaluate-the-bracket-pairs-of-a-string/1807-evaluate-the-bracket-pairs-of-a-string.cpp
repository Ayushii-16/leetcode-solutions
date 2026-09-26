class Solution {
public:


    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = s.length();
        string ans = "";
        map<string,string>m;
        for( auto &pair : knowledge){
            m[pair[0]] = pair[1];
        }
        for(int i = 0;i < n;i++){

           if(s[i] == '('){
              i++;
              string st = "";
              while( i < n && s[i] != ')'){
                  st.push_back(s[i]);
                  i++;
              }
              auto it = m.find(st);
             if(it != m.end()){
                  ans += it->second;
             }
             else ans += '?';

           }
           else{
              ans.push_back(s[i]);
           }

        }
        return ans;
    }
};