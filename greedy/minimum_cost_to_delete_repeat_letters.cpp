class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        
        int mincost=0;
        
        int maxcost=cost[0], sum=cost[0];
        
        for(int i=1; i<s.size(); i++){
            if(i>0 && s[i]!=s[i-1]) {
                mincost+=sum-maxcost;
                sum=cost[i];
                maxcost=cost[i];
            } else{
                sum+=cost[i];
                maxcost=max(maxcost, cost[i]);
            }
        }
        
        mincost+=sum-maxcost;
        
        return mincost;
    }
};
