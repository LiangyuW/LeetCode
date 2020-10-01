class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n=nums.size();
        int sum=0;
        for(auto &e: nums){
            sum+=e;
        }
     
        return ((n+1)*(n))/2-sum;
    }
};

