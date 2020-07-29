class Solution {
public:
    
    int search(vector<int>& nums, int target) {
        int m, l=0, r=nums.size()-1;
        while(l<=r){
            m=l+(r-l)/2;
            if(nums[m]==target) return m;
            else if(target<nums[m]) r=m-1;
            else l=m+1;
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



class Solution {
public:
    
    int bs(vector<int>& nums, int l, int r, int target){
        int m=l+(r-l)/2;
        
        if(l>r){     
            return -1;
        }
        if(target==nums[m]){
            return m;
        }
        else if(target<nums[m]){ 
            return bs(nums, l, m-1, target);
        }
        else{
            return bs(nums, m+1, r, target);
        }
    }
    
    int search(vector<int>& nums, int target) {
        return bs(nums, 0, nums.size()-1, target);
    }
};static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();
