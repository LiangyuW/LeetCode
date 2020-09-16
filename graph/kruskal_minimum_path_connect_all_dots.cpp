class Solution {
public:
    
    vector<int>uf;
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        int n=points.size();
        makeSet(n);
        
        vector<pair<int, pair<int, int>>>edges;
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){

                    edges.push_back({abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]), {i, j}});
            }
        }
        
        sort(edges.begin(), edges.end());
        
        int cost=0;
        int mst=n-1;
        for(auto &e: edges){
            if(merge(e.second.first, e.second.second)){
                cost+=e.first;
                if(--mst==0) return cost;
            } 
        }
        
        return cost;
    }
    

    void makeSet(int n){
        uf.resize(n);
      
        for(int i=0; i<n; i++){
            uf[i]=i;
        } 
    }
    
    bool merge(int x, int y){
        x=find(x);
        y=find(y); 
        if(x==y) return false;
        uf[x]=y;
        return true;
    }
    
    int find(int x){
        return uf[x]==x? x : uf[x]=find(uf[x]);
    }
};
