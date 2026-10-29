class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>freq;
        vector<int>v;
        for(auto &arr : nums){
            for(auto i : arr){
                freq[i]++;
            }
        }
        for(auto i : freq){
            if(i.second == nums.size()){
                v.push_back(i.first);
            }
        }
        return v;
    }
};