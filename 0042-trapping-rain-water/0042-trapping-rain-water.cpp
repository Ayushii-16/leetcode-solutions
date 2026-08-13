class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0;
        int j =height.size()-1;
        int ans = 0;
        int left_max=0;
        int right_max = 0;
        while(i<j){
            
           if(height[i] < height[j]){
               if(height[i]>=left_max)
                      left_max = height[i];
                else ans += left_max - height[i];
               i++;
           }
           else {
            if(right_max <= height[j]) right_max = height[j];
            else ans += right_max - height[j];
            j--;
           }
        }
        return ans;
    }
};