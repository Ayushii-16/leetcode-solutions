class Solution {
public:

    void dfs(int n,vector<vector<int>>&adj,vector<bool>&vis){
        vis[n] = true;
        for(auto e : adj[n]){
            if(!vis[e]) dfs(e,adj,vis);
        }
    }


    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
          vector<vector<int>>adj(n+1);
          for(int i=0 ;i < invocations.size();i++){
            int u = invocations[i][0];
            int v = invocations[i][1];
            adj[u].push_back(v);
          }
             
             vector<bool>vis(n+1,false);
                vector<int>v;
               dfs(k,adj,vis);

            for (auto& edge : invocations) {
            if (!vis[edge[0]] && vis[edge[1]]) {
                vector<int> all(n); 
                iota(all.begin(), all.end(), 0); 
                return all; 
            }
        }  
             for (int i = 0; i < n; i++) if (!vis[i]) v.push_back(i);
                
           
              
             return v;

    }
};