class Solution {
public:
    int largestAltitude(vector<int>& gain) {
 int ans = 0;
 int al = 0;
 for(int i=0;i<gain.size();i++){
      al = al +  gain[i];
      ans = max(ans,al);
 }
 return ans;
    }
};