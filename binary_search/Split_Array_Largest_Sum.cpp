class Solution {
public:
    
    bool ok(vector<int>& nums, int m, int sum){
        int u=sum;
        int subarys=0;
        for(auto e:nums){
            if(e>sum)return false;
            
            if(e>u){
                u=sum;
                subarys++;
            }
            if(e<=u){
                 u-=e;
            }
        }
        if(u>=0) subarys++;
        return subarys<=m;
    }
    
    int splitArray(vector<int>& nums, int m) {
        int l=0, r=INT_MAX;
        
        while(l<r){
            int mid=l+(r-l)/2;
            if(ok(nums, m, mid)){
                r=mid;
            } else{
                l=mid+1;
            }    
        }
        
        return r;
    }
};
