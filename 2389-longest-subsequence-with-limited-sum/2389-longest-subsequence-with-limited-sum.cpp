class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>v;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 1;i < n;i++){
           nums[i] += nums[i-1];
        }
        for(int i=0;i<queries.size();i++){
            int l = 0;
            int h = n-1;
            int ans = 0;
            while(l <= h){
                int mid = l + (h-l)/2;
                if(nums[mid] <= queries[i]){
                    ans = mid+1;
                    l = mid+1;
                }
                else h = mid-1;
            }
            v.push_back(ans);
        }
        return v;
    }
};