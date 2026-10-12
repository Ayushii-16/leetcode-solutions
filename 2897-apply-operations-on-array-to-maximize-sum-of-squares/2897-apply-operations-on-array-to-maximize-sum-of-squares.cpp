class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
          long long MOD = 1e9 + 7;
        std::vector<int> bitCount(31, 0);
        for (int num : nums) {
            for (int i = 0; i < 31; i++) {
                if ((num >> i) & 1) {
                    bitCount[i]++;
                }
            }
        }

        long long totalSum = 0;

        for (int step = 0; step < k; step++) {
            long long currentNum = 0;
            
            for (int i = 0; i < 31; i++) {
                if (bitCount[i] > 0) {
                    currentNum |= (1 << i); 
                    bitCount[i]--;        
                }
            }
            long long squared = (currentNum * currentNum) % MOD;
            totalSum = (totalSum + squared) % MOD;
        }

        return totalSum;
    }
};