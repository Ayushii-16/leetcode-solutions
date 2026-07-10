class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l  = 1;
        int r = *max_element(piles.begin(),piles.end());
        while(l < r){
            int p = 0;
            int mid = l +(r-l)/2;
            for(int i = 0;i < piles.size();i++){
                p += (piles[i] + mid-1)/mid;
            }
            if(p > h) l = mid+1;
            else r = mid;       
        }
        return l;
    }
};