class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        
        unordered_set<string>dict(bank.begin(), bank.end());
        vector<char>dna={'A', 'C', 'G', 'T'};
        
        queue<string>q;
        q.push(start);
        unordered_map<string, int>dist;
    
        dist[start]=0;
            
        while(!q.empty()){
            string gene=q.front();
            q.pop();
            dict.erase(gene);
            
            for(int i=0; i<8; i++){
                string tmp=gene;
                for(auto e: dna){
                    tmp[i]=e;
                    
                    if(dict.find(tmp)!=dict.end()){
                        dist[tmp]=dist[gene]+1;
                        q.push(tmp);
                        dict.erase(tmp);
                        
                        if(tmp==end){
                            return dist[end];
                        }
                    }
                }
            }
        }
        return -1;
        
    }
};
