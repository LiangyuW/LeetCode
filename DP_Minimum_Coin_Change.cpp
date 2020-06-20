class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
            if(amount==0) return 0;
            int min=INT_MAX;
        
            for(int i=0; i<coins.size(); i++){
                if(coins[i]<=amount){
                    int submin=coinChange(coins, amount-coins[i]); 
                    if(submin!=INT_MAX&&submin!=-1&&submin+1<min){
                        min=submin+1;
                    }
                }
            }
            return min==INT_MAX? -1:min;
        }
};


class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int f[amount+1];
        f[0]=0;
        
        for(int i=1; i<=amount; i++){
            f[i]=INT_MAX;
        }
        
        for(int i=1; i<=amount; i++){
            for(int j=0; j<coins.size(); j++){
                if(coins[j]<=i){
                    int subsum=f[i-coins[j]];
                    if(subsum!=INT_MAX && subsum+1<f[i]){
                        f[i]=subsum+1;
                    }
                }
            }
        }
        
        return f[amount]==INT_MAX?-1:f[amount];
        
    }
};
