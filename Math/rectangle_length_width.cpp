class Solution {
public:
    vector<int> constructRectangle(int area) {
        for(int i=sqrt(area); i>0; i--){
            int j=area/i;
            if(i*j==area){
                return {area/i, i};
            }
        }
        return {};
    }
};
