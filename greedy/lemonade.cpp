class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> change;
        
        for(int i=0; i<bills.size(); i++){
            int k=bills[i]-5;
             change[bills[i]]++;

                while(k>=20 && change[20]){
                    change[20]--;
                    k-=20;
                }
                while(k>=10 && change[10]){
                    change[10]--;
                    k-=10;
                }
                while(k>=5 && change[5]){
                    change[5]--;
                    k-=5;
                }
                
                if(k>0) return false;

        }
        return true;
    }
};
