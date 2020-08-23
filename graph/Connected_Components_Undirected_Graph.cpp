class Solution {
public:
    vector<int>uf;
    vector<int>size;
    
    void makeSet(int n){
        uf.resize(n);
        size.resize(n, 1);
        
        for(int i=0; i<n; i++){
            uf[i]=i;
        }
    }
    
    int find(int x){
        if(uf[x]==x){
            return x;
        }
        return uf[x]=find(uf[x]);
    }
    
    
    void Union(int x, int y){
        x=find(x);
        y=find(y);
        
        if(x==y) return;
        if(size[x]<size[y]){
            swap(x,y);
        }
        uf[y]=x;
        size[x]+=size[y];
        size[y]=0;
    }
    
        
    
    
    int countComponents(int n, vector<vector<int>>& edges) {
        
        makeSet(n);
    
        for(auto e: edges){
            Union(e[0], e[1]);
        }
        
        unordered_set<int>st;
        
        for(auto e: uf){
            st.insert(find(e));
        }
        return st.size();
    }
};
