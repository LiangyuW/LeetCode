class Solution {
public:
    
    bool ok(vector<int>& bloomDay, int m, int k, int days){
        
        int u=0;
        int banquets=0;

        for(int i=0; i<bloomDay.size(); i++){
            if(bloomDay[i]<=days){
                u++;
            } 
            else{
                u=0;
            }
            if(u==k) {
                banquets++;
                u=0;
            }
            }
        
        return  banquets>=m;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
       
        if(m*k>bloomDay.size()) return -1;
        
        int l=0, r=1e9;
        
        while(l<r){
            int mid=l+(r-l)/2;
            if(ok(bloomDay, m, k, mid)){
                r=mid;
            } else{
                l=mid+1;
            }
        }
        return r;
    }
};
