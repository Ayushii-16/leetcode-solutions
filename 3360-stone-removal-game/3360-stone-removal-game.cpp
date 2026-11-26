class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10) return false;
        if(n == 10) return true;
        int l = 10;
        int num = 0;
        while(true){
            if(n < l){
                if(num%2 == 0) return false;
                else return true;
            }
           
            n -= l;
            l--;
            num++;
        }
        return true;
    }
};