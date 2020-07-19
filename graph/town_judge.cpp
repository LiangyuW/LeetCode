class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<vector<int>> adj(N+1);
        
        for(int i=0; i<trust.size(); i++){
            adj[trust[i][0]].push_back(trust[i][1]);
        }
        
        int j=0; 
        int judge=1e9;
        for(int i=1; i<=N; i++){
            if(adj[i].size()==0){
                j++;
                judge=i;
            }
        }
        if(j==1){
            for(int i=1; i<=N; i++){
                if(i!=judge){
                    if(count(adj[i].begin(), adj[i].end(), judge)!=1){
                        return -1;
                    }
                }
            }
         return judge;
        }
        else return -1;
        
    }
};

static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();
