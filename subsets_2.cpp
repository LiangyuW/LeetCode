class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> out={{}};
        int start;
        for(int i=0; i<nums.size(); i++){
            if(i==0||nums[i]!=nums[i-1]) start=0;
            for(int end=out.size(); start<end; start++){
                
                vector<int> subset(out[start]);
                subset.push_back(nums[i]);
                out.push_back(subset);
            }
            cout<<endl;
        }
        return out;
    }
};
