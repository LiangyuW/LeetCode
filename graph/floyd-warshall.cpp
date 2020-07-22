class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> dist(n, vector<int>(n, 1e5));
        int i, j, k;
        
        for(int i=0; i<n; i++){
            dist[i][i]=0;
        }
        
        for(int i=0; i<edges.size(); i++){
            dist[edges[i][0]][edges[i][1]]=edges[i][2];
            dist[edges[i][1]][edges[i][0]]=edges[i][2];
        }
        

        
        for(k=0; k<n; k++){
            for(i=0; i<n; i++){
                for(j=0; j<n; j++){
                    if(dist[i][j]>dist[i][k]+dist[k][j]){
                        dist[i][j]=dist[i][k]+dist[k][j];
                    }
                }
            }
        }

        
        int city=0;
        int min=n;
        for(int i=0; i<n; i++){
            int reachable=0;
            for(int j=0; j<n;j++){
                if(dist[i][j]<=distanceThreshold){
                    reachable++;
                }
            }
            if(reachable<=min){
                min=reachable;
                city=i;
            }
        }
        
       return city; 
    }
};
