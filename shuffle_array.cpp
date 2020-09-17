class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>out(n*2);
        
        for(int i=0; i<n; i++){
           out[i*2]=nums[i];
            out[i*2+1]=nums[n+i];
            
         }
        return out;
    }
};
