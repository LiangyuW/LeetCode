class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph, int src, vector<int>&color){
                
        color[src]=1;
        queue<int>q;
        q.push(src);
        
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(auto v:graph[u]){
                
                /* check self-loop. */
                if(v==u) return false;
                
                if(color[v]==-1){
                    color[v]=1-color[u];
                    q.push(v);
                }
                
                else if(color[v]==color[u]){
                    return false;
                }
            
            }
            
        }
        return true;
    }
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        
        vector<int>color(graph.size(), -1);
        
        for(int i=0; i<graph.size();i++){
            if(color[i]==-1){
                if(isBipartite(graph, i, color)==false){
                    return false;
                }
            }
        }
        return true;
        
    }
};
