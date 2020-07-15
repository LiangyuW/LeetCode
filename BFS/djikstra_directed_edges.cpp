typedef pair<int, int> ii;

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        vector<vector<ii>> adj(N+1);
        
        for(int i=0; i<times.size(); i++){
            adj[times[i][0]].push_back({times[i][1], times[i][2]});
        }
        
        priority_queue<ii, vector<ii>, greater<ii>> pq;
        vector<int>dis(N+1, INT_MAX);
        dis[K]=0;
        pq.push({dis[K], K});
        
     
        while(!pq.empty()){
            auto [distance, u]=pq.top();
            pq.pop();
            for(auto [v,w]: adj[u]){
               
                if(dis[v]>dis[u]+w){
                    dis[v]=dis[u]+w;
                    pq.push({dis[v], v});
                }
            }
        }
        int max=-1;
        for(int i=1; i<dis.size(); i++){
            if(dis[i]==INT_MAX) return -1;
            if(dis[i]>max)max=dis[i];
        }
        
        return max;
    }
};

static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();
