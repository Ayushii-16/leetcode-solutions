class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int l = 0;
        int h =  *max_element(candies.begin(),candies.end());
        while(l < h){
            int mid = l + (h-l+1)/2;
            long long p = 0;
            for(int i = 0; i < candies.size(); i++){
                p += (candies[i])/mid;
            }
            if(p >= k) l = mid;
            else h = mid-1;
        }
        return l;
    }
};