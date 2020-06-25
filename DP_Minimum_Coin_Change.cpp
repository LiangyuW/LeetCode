class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, INT_MAX);
        dp[0]=0;
        
        for(int coin: coins){
            for(int i=coin; i<=amount; i++){
                if(dp[i-coin]!=INT_MAX){
                    dp[i]=std::min(dp[i], dp[i-coin]+1);
                }
            }
        }
        
        return dp[amount]==INT_MAX?-1:dp[amount];
        
    }
};

static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();

