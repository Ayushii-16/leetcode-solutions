class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
       map<int,int>m;
        for(auto i : s){
            m[i]++;
        }
        for(auto i : t){
             
            if(m.find(i) == m.end() || m[i] == 0) return false;
            m[i]--;
        }
        return true;
    }
};