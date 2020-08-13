class Solution {
public:
    int missingElement(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        int r=n;
        
        while(l<r){
            int m=l+(r-l)/2;
            
            if(nums[m]-nums[0]-m<k){
                l=m+1;
            }
            else{
                r=m;
            }
            
        }
        cout<<l<<" "<<r<<endl;
       
        return nums[0]+l+k-1;
    }
};


class Solution {
public:
    int missingElement(vector<int>& nums, int k) {
        int i=nums[0], j=0, t=0, out;
        int n=nums.size();
        while(t<k){
            
            if(nums[j]==i){
                if(j<n-1){
                    j++;}
                else {
                   
                    return nums[j]+(k-t);
                }
            }
            else{
                t++;
                out=i;
               
            }
           i++;
        }
        
        return out;   
    }
};
