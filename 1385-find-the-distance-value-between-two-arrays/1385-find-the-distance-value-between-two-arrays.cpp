class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int m = arr1.size();
        int count = 0;
        sort(arr2.begin(),arr2.end());
        for(int i=0;i<m;i++){
             int l = 0;
        int h = arr2.size()-1;
            bool ans = true;
            int mid = l+(h-l)/2;
            while(l <= h){
                int mid = l + (h - l) / 2; 
                if(abs(arr1[i] - arr2[mid]) <= d) {
                    ans = false;
                    break; 
                }
                if(arr2[mid] < arr1[i]) {
                    l = mid + 1;
                } 
                else {
                    h = mid - 1;
                }
            }
            if(ans == true) count++; 
        }
        return count;
    }
};