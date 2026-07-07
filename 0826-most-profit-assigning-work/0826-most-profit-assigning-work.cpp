class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {

      vector<pair<int,int>>job;

      for(int i = 0; i < difficulty.size();i++) {
          job.push_back({difficulty[i],profit[i]});
      }
      sort(job.begin(),job.end());
      sort(worker.begin(),worker.end());
      
      int j  = 0;
      int ans = 0;
      int curr = 0;

      for(int i = 0; i < worker.size();i++){
        
       while(j < difficulty.size() && job[j].first <= worker[i]){
           curr = max(curr,job[j].second);
           j++;
       }
        ans += curr;

      }
      
      return ans;

    }
};