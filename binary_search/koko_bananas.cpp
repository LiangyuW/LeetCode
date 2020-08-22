class Solution {
public:
    
    bool possible(vector<int>& piles, int H, int k){
        int hours=0;
        for(auto p: piles){
           
              hours+=ceil((double)p/k);  
        }
        return hours<=H;
    }
    
    int minEatingSpeed(vector<int>& piles, int H) {
         ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        
        
        int l=1, r=1e9;
       
        while(l<r){
            int m=l+(r-l)/2;
            if(possible(piles, H, m)){
               r=m;
            } else{
                l=m+1;
            }
            
        }
        return l;
    }
};
