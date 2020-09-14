class Solution {
public:
    
    vector<int>uf;
    int sets;
    
    void makeSet(int n){
        uf.resize(n);
        sets=n;
        for(int i=0; i<n; i++){
            uf[i]=i;
        } 
    }

    int findCircleNum(vector<vector<int>>& M) {
          ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        
        makeSet(M.size());
        
        for(int i=0; i<M.size(); i++){
            for(int j=0; j<M[0].size(); j++){
                if(i!=j && M[i][j]==1) merge(i, j);
            }
        }
        
        return sets;
    }
    
    void merge(int x, int y){
        x=find(x);
        y=find(y);
        if(x==y) return;
        uf[y]=x;
        sets--;
    }
    
    int find(int x){
        if(uf[x]==x){
            return x;
        }
        return uf[x]=find(uf[x]);
    }
    
    
};
