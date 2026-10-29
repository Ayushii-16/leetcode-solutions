class Solution {
public:
    bool closeStrings(string word1, string word2) {
     if(word1.length() != word2.length()){
        return false;
     }   
         unordered_map<char,int>m1;
         for(auto i : word1){
            m1[i]++;
         }

         unordered_map<char,int>m2;
         for(auto i : word2){
            m2[i]++;
         }

         for(auto i : m1){
            if(m2.find(i.first) == m2.end()){
                return false;
            }
         }

         vector<int>f1,f2;
         for(auto i : m1){
            f1.push_back(i.second);
         }
         for(auto i : m2){
            f2.push_back(i.second);
         }
         sort(f1.begin(),f1.end());
         sort(f2.begin(),f2.end());

     return f1 == f2;
    }
};