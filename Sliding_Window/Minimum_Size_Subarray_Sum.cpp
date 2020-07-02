class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int j=0, sum=0, min=INT_MAX;
        int k=0;
        
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            while(sum>=s){
                sum-=nums[j];
                min=std::min(min, i+1-j);
                j++;
            }
           
        }
        return (min==INT_MAX)? 0:min;
    }
};
