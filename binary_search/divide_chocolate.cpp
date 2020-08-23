class Solution {
public:
    
    bool ok(vector<int>& sweetness, int K, int sweet){
        int u=0;
        int pieces=0;
        for(auto e: sweetness){
             u+=e;
            if(u>=sweet){
                pieces++;
                u=0;
            }  
        }
        return pieces>=K+1;
    }
    
    int maximizeSweetness(vector<int>& sweetness, int K) {
        
        int l=0, r=1e9;
        for (int e : sweetness) {
            l = min(l, e);
            r += e;
        }
        while(l<=r){
            int m=l+(r-l)/2;
            if(ok(sweetness, K, m)){
                l=m+1;
            } else{
                r=m-1;
            }
        }
        return r;
    }
};
