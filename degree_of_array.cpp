class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int>freq;
        unordered_map<int, int>first;
         
        int mostfreq=1;
        int minlen=INT_MAX;
        
        for(int i=0; i<n; i++){
            if(freq.find(nums[i])==freq.end()){
                freq[nums[i]]=1;
                first[nums[i]]=i;
            } else{
                freq[nums[i]]++;
                
                if(freq[nums[i]]>mostfreq){
                    mostfreq=freq[nums[i]];
                    minlen=i-first[nums[i]]+1;
                }
                else if(freq[nums[i]]==mostfreq){
                    minlen=min(minlen, i-first[nums[i]]+1);
                }
            }                
        }
        if(mostfreq==1) return 1;
        
        return minlen;
    }
};
