class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n = seq.size();
        vector<int>v;
        
        stack<int>s;

        for(int i=0; i<n; i++){
            if(s.empty()){
                s.push(0);
                v.push_back(0);
            }
          else  if(seq[i] == '('){
                if(s.top() == 0){
                   s.push(1);  
                   v.push_back(1);
                }
                else {s.push(0);
                v.push_back(0);}
            }
            else{
                v.push_back(s.top());
                s.pop();
            }
        }

        return v;

    }
};