class Solution {
public:
    
    void reverse(vector<int>& nums, int a, int b){
        
        int mid=(b+a)/2;
        
        for(int i=a; i<=mid;i++){
            int tmp=nums[i];
            nums[i]=nums[a+b-i];
            nums[a+b-i]=tmp;
            } 
    }
    
    void rotate(vector<int>& nums, int k) {
        
        int s=k%nums.size();
        if(nums.size()==1) return;
        if(s>0){
        reverse(nums, 0, nums.size()-1);
        reverse(nums, 0, s-1);
        reverse(nums, s, nums.size()-1);
        }
    }
};

class Solution {
public:
    

    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};

static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();
