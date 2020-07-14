class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<unordered_map<int, double>> adj(n);
        
        for(int i=0; i<edges.size(); i++){
            adj[edges[i][0]][edges[i][1]]= succProb[i];
            adj[edges[i][1]][edges[i][0]]= succProb[i];
        }
        
        vector<double> dis(n, 0);
        dis[start]=1.0;
        
        queue<int>q;

        q.push(start);
        
        while(!q.empty()){
            int u=q.front();
            cout<<u<<" ";
            q.pop();
            for(auto e: adj[u]){
                int v=e.first;
                double w=e.second;
                if(w*dis[u]>dis[v]){
                    q.push(v);
                    dis[v]=w*dis[u];
                }
            }
            
        }
    
        return dis[end];
    }
    
};
