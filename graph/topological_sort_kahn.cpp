class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n);
        vector<int> in_degree(n,0), topo;
        
        for(auto &e : pre) {
            adj[e[1]].push_back(e[0]);
            in_degree[e[0]]++;
        }
        for (int i = 0; i < n; i++) {
            if (in_degree[i]==0) topo.push_back(i);
        }
        
       for (int i = 0; i < topo.size(); i++)
            for (int j: adj[topo[i]])
                if (--in_degree[j] == 0) topo.push_back(j);
        
        return topo.size()==n;
    }
};
