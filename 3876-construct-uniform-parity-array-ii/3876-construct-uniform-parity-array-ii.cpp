class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       
       int odd = INT_MAX;
       int even = INT_MAX;
       for(auto i : nums1){
        if(i%2 == 0) even = min(even,i);
        else odd = min(odd,i);
       }
       if(odd == INT_MAX) return true;
       if(even == INT_MAX) return true;
       return odd<even;
    }
};