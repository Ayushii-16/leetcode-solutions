class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int n = candies.size();
        vector<bool>v(n);
        int  mx = INT_MIN;
        for(int i : candies){
            if(i > mx) mx = i;
        }
        for(int j = 0;j < n;j++){
            if(candies[j] + extraCandies >= mx) v[j] = true;
            else v[j] = false;
        }
        return v;
    }
};