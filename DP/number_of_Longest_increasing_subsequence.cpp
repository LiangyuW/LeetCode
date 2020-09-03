class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
 
        vector<int>len(n,1);
        vector<int>freq(n,1);
        int longest=1;
        if(n==0) return 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<=i-1; j++){
                if(nums[i]>nums[j]){
                    
                    if(len[i]<len[j]+1){
                        len[i]=len[j]+1;
                        freq[i]=freq[j];
                    }
                    else if(len[i]==len[j]+1){
                        freq[i]+=freq[j];
                    }  
                } 
                
            }
            longest=max(longest, len[i]);
            
        }
        int numseq=0;
        for(int i=0; i<n; i++){
            if(len[i]==longest){
                numseq+=freq[i];
            }
        }
        return numseq;
    }
};
