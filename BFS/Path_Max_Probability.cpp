typedef pair<int, double> id;
typedef pair<double, int> di;
class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<id>> adj(n);
        
        for(int i=0; i<edges.size(); i++){
            adj[edges[i][0]].push_back({edges[i][1], -log(succProb[i])});
            adj[edges[i][1]].push_back({edges[i][0], -log(succProb[i])});
        }
        
        vector<double> dis(n, FLT_MAX);
        dis[start]=0;
        
        priority_queue<di, vector<di>, greater<di>> pq;

        pq.push({dis[start], start});
        
        while(!pq.empty()){
            auto [prob, u]=pq.top();
            pq.pop();
            if(prob!=dis[u]) continue;
            
            for(auto [v, w]: adj[u]){
               
                if(dis[v]>dis[u]+w){
                    dis[v]=dis[u]+w;
                    
                    pq.push({dis[v],v});
                }
            }
            
        }
    
        return 1/exp(dis[end]);
    }
    
};





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
