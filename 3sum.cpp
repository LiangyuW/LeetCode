class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         
        vector<vector<int>>out;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        
        for(int i=0; i<n-1 && nums[i]<=0; i++){
            if (i >0 && nums[i-1]==nums[i]) continue;
            int l=i+1;
            int r=n-1;
            int x=nums[i];
            while(l<r){
                int sum=nums[i] + nums[l] + nums[r];
                if(sum<0 || l>i+1 && nums[l]==nums[l-1]){
                    l++;
                }
                else if(sum>0 || r<n-1 && nums[r]==nums[r+1]){
                    r--;
                }
                else {
                    out.push_back({x, nums[l], nums[r]});
                    l++;
                    r--;
                }
            }
            
        }
        return out;
    }
};
