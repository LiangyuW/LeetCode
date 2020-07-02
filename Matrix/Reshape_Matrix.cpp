class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<int> v(c, 0);
        vector<vector<int>> matrix(r, v);
        int m=nums.size();
        int n=nums[0].size();
        
        if(r*c!=m*n) return nums;
        int s=0, t=0;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                matrix[i][j] = nums[s][t];
                t++;
                if(t==n){
                    s++;
                    t=0;
                }
            }
            
        }
        return matrix;
    }
};
