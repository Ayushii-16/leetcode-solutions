class Solution {
public:

    bool solve(string s,int i,int j){
        while(i < j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    int maxPalindromes(string s, int k) {
        int n = s.length();
        int i = 0;
        int count = 0;
        for(int j = k-1;j < n;){
           
            if(j-k+1 >= i && solve(s,j-k+1,j)){ 
                count++;
                i = j+1;
                j = i+k-1;
                }
                else if(j-k >= i && solve(s,j-k,j)){
                     count++;
                i = j+1;
                j = i+k-1;
                }
            else {
                j++;
            }
        }
        return count;
    }
};