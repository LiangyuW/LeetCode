class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sum(nums.size());
        
        partial_sum(nums.begin(), nums.end(), sum.begin());
        
        return sum;
    }
};
