class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int l = 1;
        int h = *max_element(quantities.begin(),quantities.end());
        while(l < h){
            int mid  = l + (h-l)/2;
            int p =  0;
            for(int i = 0; i < quantities.size(); i++){
                p += (quantities[i] + mid - 1)/mid;
            }
            if(p <= n) h = mid;
            else l = mid+1;
        }
        return l;
    }
};