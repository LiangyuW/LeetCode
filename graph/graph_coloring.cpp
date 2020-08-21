class Solution {
public:
    vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {
        vector<vector<int>>adj(N+1);
        for(auto a: paths){
            adj[a[0]].push_back(a[1]);
            adj[a[1]].push_back(a[0]);
        }
        vector<int>out(N);
        
        for(int i=1; i<=N; i++){
            
            vector<bool>colors(4, false);
            
            for(int a: adj[i]){
                colors[out[a-1]]=true;
            }
            
            for(int j=1; j<=4; j++){
                if(colors[j]==false){
                    out[i-1]=j;
                    break;
                }
            }   
        }
        
        return out;
    }
};
