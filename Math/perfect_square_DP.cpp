class Solution {
public:
    
    
    int numSquares(int n) {
        
       vector<int>dp(n+1, INT_MAX);

        for(int i=1; i<=n; i++){
            
            double srt=sqrt(i);
            
            if(srt-floor(srt)==0){
                dp[i]=1;
                continue;
            }
            
            for(int j=1; j<=(int)srt; j++){
                int dif =i-j*j;
                dp[i]=min(dp[i], dp[dif]+dp[j*j]);
            }
            
        }
        return dp[n];
    }
            
};
