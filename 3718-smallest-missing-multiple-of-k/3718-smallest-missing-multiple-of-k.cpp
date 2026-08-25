class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>s(nums.begin(),nums.end());
        int i = 1;
     bool fi = false;
        while(!fi){
     if(s.find(k*i) == s.end()) {
        fi = true;
        return k*i;
     }
     else i++;
        }
        return 0 ;
    }
};