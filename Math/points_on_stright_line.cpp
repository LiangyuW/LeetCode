class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        if(n<2) return false;
        if(n==2) return true;
        int dy=coordinates[1][1]-coordinates[0][1];
        int dx=coordinates[1][0]-coordinates[0][0];
        
        for(int i=2; i<n; i++){
            int dy2=coordinates[i][1]-coordinates[1][1];
            int dx2=coordinates[i][0]-coordinates[1][0];
            if(dy*dx2!=dy2*dx){
                return false;
            }
            
        }
        return true;
    }
};

static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();
      
      
        
