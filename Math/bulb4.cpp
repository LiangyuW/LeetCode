class Solution {
public:
    int minFlips(string target) {
        char state='0';
        int flips=0;
        
        for(int i=0; i<target.size(); i++){
            if(state!=target[i]){
                target[i]=='1'?state='1':state='0';
                flips++;
            }
        }
        return flips;
    }
};
