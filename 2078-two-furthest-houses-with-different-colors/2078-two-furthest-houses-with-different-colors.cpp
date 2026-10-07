class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans = 0;
        int n = colors.size()-1;
       for(int i = colors.size()-1;i>=0;i--){
         if(colors[0]!=colors[i]) ans = max(ans,i);
       }
       for(int i = 0;i<colors.size();i++){
         if(colors[n]!=colors[i]) ans = max(ans,n-i);
       }
       return ans;
    }
};