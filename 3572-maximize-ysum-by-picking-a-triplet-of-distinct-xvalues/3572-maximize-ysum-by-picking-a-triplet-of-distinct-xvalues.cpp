class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        map<int,int>m;
        for(int i=0;i<x.size();i++){
            int num = x[i];
            if(m.find(num) != m.end()){
                int t = m[num];
                if(y[i] > y[t]) m[num] = i;
            }
          else  m[num] = i;
        }
        if(m.size() < 3) return  -1;
       priority_queue<int>v;
        for(auto i : m){
           v.push(y[i.second]);
        }
        int k = 0;
        int count = 0;
        while(k!=3){
            int f = v.top();
            count += f;
            v.pop();
            k++;
        }
        return count;
    }
};