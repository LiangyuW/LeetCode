class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int, int>mp;
        int longest=0;
        
        for(auto& e: nums){
            if(mp.find(e)==mp.end()){
                int left=0, right=0;
                
                if(mp.find(e-1)!=mp.end()){
                    left=mp[e-1];
                }

                if(mp.find(e+1)!=mp.end()){ 
                    right=mp[e+1];
                }
                
                int sequence_len = left+right+1;
                longest=max(longest, sequence_len);
                
                mp[e] = sequence_len;
                mp[e-left]= sequence_len;
                mp[e+right]=sequence_len;
            }
        }
     
        return longest;
    }
};
