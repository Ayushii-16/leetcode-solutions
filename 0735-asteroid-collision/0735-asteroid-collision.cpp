class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
      stack<int>s;
    

      for(int i = 0;i < asteroids.size();i++){
             bool destroyed = false;
        while(!s.empty() && s.top() > 0 && asteroids[i] < 0) {
            if(abs(s.top()) < abs(asteroids[i]))  s.pop();
            else if(abs(s.top()) == abs(asteroids[i])){
                s.pop();
                destroyed = true;
                break;
            }
            else {
                destroyed = true;
                break;
            }
        }

       if(!destroyed) s.push(asteroids[i]);
          
      }
         vector<int>v(s.size());
       for(int i = v.size()-1;i >= 0;i--){
         v[i] = s.top();
         s.pop();
       }

       return v;
    }
};