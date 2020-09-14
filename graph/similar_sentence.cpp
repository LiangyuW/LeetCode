class Solution {
public:
    bool areSentencesSimilarTwo(vector<string>& words1, vector<string>& words2, vector<vector<string>>& pairs) {
        unordered_map<string, vector<string>>adj;
        
        if(words1.size()!=words2.size()) return false;
        
        for(auto&e : pairs){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        
        }
        
        for(int i=0; i<words1.size(); i++){
            if(words1[i]==words2[i]) continue;
            if(adj.find(words1[i])==adj.end()) return false;
            unordered_set<string> seen;
            if(!dfs(adj, words1[i],  words2[i], seen)) return false;
        }
        
        return true;
    }
    
    bool dfs(unordered_map<string, vector<string>>&adj, string source, string target, unordered_set<string>&seen){
        vector<string>&v=adj[source];
        if(find(v.begin(), v.end(), target)!=v.end()) return true;
        if(seen.insert(source).second){
            for(string next: v){
                if(seen.find(next)==seen.end() && dfs(adj, next, target, seen)){
                    return true;
                }
            }
        }
        return false;
    }
    
};
