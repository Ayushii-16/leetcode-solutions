class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int>v;
        int l = 1;
        int h = mountain.size()-1;
        while(l < h){
            
            if(mountain[l-1]< mountain[l] && mountain[l] > mountain[l+1])
             v.push_back(l);
             l++;
        }
        return v;
    }
};