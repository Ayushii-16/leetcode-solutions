class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int count = 0;
        int freq[10] = {0};
        
        for (int d : digits) {
            freq[d]++;
        }

        for (int h = 1; h <= 9; ++h) {
            if (freq[h] == 0) continue;
            freq[h]--; 

            for (int t = 0; t <= 9; ++t) {
                if (freq[t] == 0) continue;
                freq[t]--; 

                for (int o = 0; o <= 8; o += 2) {
                    if (freq[o] == 0) continue;
                    count++; 
                }

                freq[t]++; 
            }

            freq[h]++; 
        }

        return count;

    }
};