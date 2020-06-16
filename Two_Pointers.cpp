class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        
        for(int i=0;i<nums.size(); i++){
            if(i==0||nums[i]!=nums[k-1]){   
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};

static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();

// https://leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};
