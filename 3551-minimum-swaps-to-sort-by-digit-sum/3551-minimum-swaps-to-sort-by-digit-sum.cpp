class Solution {
public:

      int getDigitSum(int v) {
        int sum = 0;
        while (v > 0) {
            sum += v % 10;
            v /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
         int n = nums.size();
        vector<pair<pair<int, int>, int>> arr(n);
        for (int i = 0; i < n; i++) {
            arr[i] = {{getDigitSum(nums[i]), nums[i]}, i};
        }

        sort(arr.begin(), arr.end());

        vector<bool> visited(n, false);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || arr[i].second == i) {
                continue;
            }

            int cycle_size = 0;
            int j = i;
            while (!visited[j]) {
                visited[j] = true;
                j = arr[j].second;
                cycle_size++;
            }

            if (cycle_size > 0) {
                ans += (cycle_size - 1);
            }
        }

        return ans;
    }
};