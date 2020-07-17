class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       
        vector<vector<int>> sets;
        sets.push_back({});
        
        for(int i=0; i<nums.size(); i++){
            int n=nums[i];
            int s=sets.size();
            for(int j=0; j<s; j++){
                    vector<int> subset(sets[j]);
                    subset.push_back(n);
                    sets.push_back(subset);
            }
        }
        return sets;
    }
};




class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> sets;
        
        for(int i=0; i<(1<<n); i++){
            vector<int> subset;
        
            for(int j=0; j<n; j++){
                if((i&(1<<j))>0){
                    subset.push_back(nums[j]);
                    
                }
            }
            sets.push_back(subset);
        }
        
        
        
        return sets;
    }
};
