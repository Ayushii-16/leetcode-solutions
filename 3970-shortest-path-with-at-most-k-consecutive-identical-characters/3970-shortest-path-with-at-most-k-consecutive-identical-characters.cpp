class Solution {
public:


     int getNextStreak(char current_label, char next_label, int current_streak, int k) {
        if (current_label == next_label) {
            if (current_streak + 1 > k) {
                return -1;
            }
            return current_streak + 1;
        }
        return 1;
    }


    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back(make_pair(v,w));
        }

        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        vector<vector<int>> dist(n, vector<int>(k + 1, INT_MAX));

        dist[0][1] = 0;
        pq.push({0, 0, 1});

        while (!pq.empty()) {
            auto current = pq.top();
            pq.pop();

            int d = current[0];
            int u = current[1];
            int streak = current[2];

            if (u == n - 1) {
                return d;
            }

            if (d > dist[u][streak]) {
                continue;
            }

            for (int i = 0; i < adj[u].size(); i++) {
                int v = adj[u][i].first;
                int w = adj[u][i].second;

                int next_streak = getNextStreak(labels[u], labels[v], streak, k);

                if (next_streak == -1) {
                    continue;
                }

                if (d + w < dist[v][next_streak]) {
                    dist[v][next_streak] = d + w;
                    pq.push({dist[v][next_streak], v, next_streak});
                }
            }
        }

        return -1;
    }
};