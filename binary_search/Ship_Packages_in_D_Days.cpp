class Solution {
public:
    bool ok(vector<int>& weights, int D, int capacity){
        int u=capacity;
        int days=0;
        for(auto e: weights){
            
            if(e>u){
                u=capacity;
                days++;
            }
            if(e<=u){
                u-=e;
            }
        }
        if(u>=0) days++;
        
        return days<=D;
    }
    
    
    
    int shipWithinDays(vector<int>& weights, int D) {
        int n=weights.size();
        int l=0, r=0;
        
        for (int i = 0; i < n; i++) {
            l = max(l, weights[i]);
            r += weights[i];
        }
        
        while(l<r){
            int m=l+(r-l)/2;
            if(ok(weights, D, m)){
                r=m;
            }else{
                l=m+1;  
            }
        }
        
        return l;
    }
};
