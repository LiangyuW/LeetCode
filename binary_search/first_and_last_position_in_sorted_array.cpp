class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();

        int first=-1, last=-1;
        
        int l=0, r=n-1;
        int m=0;
        while(l<=r){
            m=l+(r-l)/2;
            if(nums[m]<target){
                l=m+1;
            } 
            else if(nums[m]>target){
                r=m-1;
            } else {
                first=m;
                r=m-1;
            } 
        }
        
        if(first==-1) return {first, last};
       
        l=m, r=n-1;
        
        while(l<=r){
            m=l+(r-l)/2;
            if(nums[m]<target){
                l=m+1;
            } 
            else if(nums[m]>target){
                r=m-1;
            } else {
                last=m;
                l=m+1;
             
            } 
        }
        
        return {first, last};
    }
};
