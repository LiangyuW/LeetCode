


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
 
        vector<int>len(n,1);
        int longest=1;
        if(n==0) return 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<=i-1; j++){
                if(nums[i]>nums[j]){
                    len[i]=max(len[i], len[j]+1);
                    
                } 
            }
            longest=max(longest, len[i]);
        }

        
        return longest;
    }
};
