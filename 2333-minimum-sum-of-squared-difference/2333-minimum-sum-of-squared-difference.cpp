class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long long k = (long long)k1 + k2, ans = 0;
        map<int, int, greater<int>> count; 
        
        for (int i = 0; i < nums1.size(); i++) 
            count[abs(nums1[i] - nums2[i])]++;
        
        for (auto& [diff, freq] : count) {
            if (diff == 0 || k == 0) break;
            long long take = min((long long)freq, k);
            count[diff] -= take;
            count[diff - 1] += take;
            k -= take;
        }
        for (auto& [diff, freq] : count) ans += (long long)freq * diff * diff;
        return ans;
    }
};