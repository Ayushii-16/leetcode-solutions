// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
int count = INT_MAX;
    int firstBadVersion(int n) {
        if(n == 1) return 1;
        int l = 1;
        int h  = n;
        while(l <= h){
            int mid = l + (h-l)/2;
            bool res = isBadVersion(mid);
            if(res == true) {
                h = mid-1;
              count =   min(count,mid);
            }
            else{
                l = mid+1;
            }
        }
        return count;
    }
};