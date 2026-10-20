class Solution {
public:

    bool check_comp(vector<int>&nums,vector<int>&sort_nums,int start,int k){
            int drop_count = 0;
        int shift_point = 0;

        for (int j = 0; j < k; ++j) {
            int curr = start + j;
            int next = start + (j + 1) % k;
            
            if (nums[curr] > nums[next]) {
                drop_count++;
                shift_point = (j + 1) % k;
            }
        }

        if (drop_count > 1) return false;

        for (int j = 0; j < k; ++j) {
            if (nums[start + (shift_point + j) % k] != sort_nums[start + j]) {
                return false;
            }
        }

        return true;


    }

    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        for(int i=1;i*i<=n;i++){
            if(n%i == 0) {
            v.push_back(i);
            if(i*i != n) v.push_back(n/i);
            }
        }

        vector<int>sort_nums = nums;
        sort(sort_nums.begin(),sort_nums.end());

        int target = 0;

        for(auto k : v){
            bool comp = true;
            for(int i=0;i<n;i+=k){
                if(!check_comp(nums,sort_nums,i,k)){
                    comp = false;
                    break;
                }        
            }
            if(comp) target += k;
        }

        return target;

    }
};