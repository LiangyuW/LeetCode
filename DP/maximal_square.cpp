class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=m>0? matrix[0].size(): 0;
        cout<<m<<" "<<n;
        int max=0;
        int dp[m+1][n+1];
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]=='1'){
                    if(i==0||j==0) dp[i][j]=1;
                    else dp[i][j]=min({dp[i-1][j], dp[i-1][j-1], dp[i][j-1]})+1;
                    if(dp[i][j]>max) max=dp[i][j];
                } else dp[i][j]=0;
            }
        }
        return max*max;
    }
};
