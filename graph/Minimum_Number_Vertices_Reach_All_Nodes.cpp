class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>incoming(n,0);
        for(auto e:edges){
            incoming[e[1]]++;    
        }
        vector<int>out;
     
        for(int i=0; i<n; i++){
            if(incoming[i]==0) out.push_back(i);
        }
        return out;
    }
};static const auto speedup = []() {
std::ios::sync_with_stdio(false); std::cin.tie(nullptr); cout.tie(nullptr); return 0;
}();
