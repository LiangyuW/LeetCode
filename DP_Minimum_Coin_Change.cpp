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
