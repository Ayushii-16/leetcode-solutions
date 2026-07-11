class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
       
       sort(asteroids.begin(),asteroids.end());
       long s = mass;
        for(int i = 0; i < asteroids.size();i++){
          if(s >= asteroids[i] ) {
            s += asteroids[i];
          }
         else return false;
       }
       return true;
    }
};