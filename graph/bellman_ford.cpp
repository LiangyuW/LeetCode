class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        
        vector<int>dis(n, 1e9);
        dis[src]=0;
        int E=flights.size();
        for(int i=0; i<=K; i++){
            vector<int>idis(dis);
            for(auto f: flights){
               idis[f[1]]=min(idis[f[1]], dis[f[0]]+f[2]);    
            }
            dis=idis;
        }
        return dis[dst]==1e9? -1: dis[dst];
    }
};
