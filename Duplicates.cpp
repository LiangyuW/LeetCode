
/*
Unordered Map 60% faster than Map.
*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        unordered_map<int, int> table;
        
        for(int i = 0; i<nums.size(); i++){
            if(table.count(nums[i])==0){
                table[nums[i]]=i; 
            }
            else{                 
                if(i-table[nums[i]]<=k){    
                    return true;
                }
                table[nums[i]]=i;
            }      
        }
        return false;
    }
};
