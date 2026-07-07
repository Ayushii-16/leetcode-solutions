class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>v;
         sort(potions.begin(),potions.end());
           int m = potions.size();
         for(int i=0;i<spells.size();i++){
            int l=0;
            int h = m-1;
            int ans = m;
            while(l <= h){
                int mid = l+(h-l)/2;
                if((long long)spells[i]*potions[mid]>= success){
                  ans = mid;
                  h = mid-1;
                }
                else l = mid+1;
            }
            v.push_back(m-ans);
         }
     return v;
    }
};