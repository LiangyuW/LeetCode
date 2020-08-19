class Solution {
public:
    bool ok(vector<int>& P, int balls, int dist){
        
            int pos=-1;
            int u=0;
            for(int e: P){
                if(pos<=e){
                    pos=e+dist;
                    u++;
                }
            }
       
        return u>=balls;
    }
    
    
    int maxDistance(vector<int>& P, int balls) {
        
        sort(P.begin(), P.end());
        
        int l=0, r=1e9;
        
        while(l<=r){
            int m=l+(r-l)/2;
            if(ok(P, balls, m)){
                l=m+1;
            } else{
                r=m-1;
            }
        }
        return l-1;
    }
};
