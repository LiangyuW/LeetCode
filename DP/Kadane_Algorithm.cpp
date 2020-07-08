class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max_sum=nums[0];
        int max_last=nums[0];
       
        for(int i=1; i<nums.size(); i++){
            if(max_last<0){
                max_last=std::max(max_last, nums[i]);
            } else {
                max_last+=nums[i];
            }
            max_sum=max(max_sum, max_last);
            
        }
        
       return  max_sum;
    }
};
