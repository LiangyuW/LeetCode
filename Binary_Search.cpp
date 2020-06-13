class Solution {
public:
    
    int BinarySearch(vector<int>& nums, int s, int t, int target){
        while(s<=t){
            int m=s+(t-s)/2;
            
            if(nums[m]==target){
                return m;
            }
            if(nums[m]<target){
                s=m+1;
            } else{
                t=m-1;
            }
        }
        return -1;
    }
    
    
    int search(vector<int>& nums, int target) {
        int s=0;
        int t=nums.size()-1;
        
        if(nums.size()==0){
            return -1;
        }
        
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]){
                t=i;
                break;
            }
        }

        if(target==nums[s]){
            return s;
        }
         
        if(target<nums[s]){
            return BinarySearch(nums, t+1, nums.size()-1, target);
        }
        
        if(target>nums[s]){
            return BinarySearch(nums, s, t, target);
        }

        
        return -1;
    }
};

static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();




