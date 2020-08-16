class Solution {
public:
    void backtrack(vector<int>&nums, int i, vector<vector<int>> &perm){
       
        if(i==nums.size()) perm.push_back(nums);
        else{
            for(int j=i; j<nums.size(); j++){
                swap(nums[i], nums[j]);
                backtrack(nums, i+1, perm);
                swap(nums[i], nums[j]);
            }
        }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> perm;
         backtrack(nums, 0, perm);
        return perm;
        
    }
};
