class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()<2) return false;
        
        int dy=coordinates[1][1]-coordinates[0][1];
        int dx=coordinates[1][0]-coordinates[0][0];
        
        for(int i=2; i<coordinates.size(); i++){
            int dy2=coordinates[i][1]-coordinates[1][1];
            int dx2=coordinates[i][0]-coordinates[1][0];
            if(dy*dx2!=dy2*dx){
                return false;
            }
            
        }
        return true;
    }
};
