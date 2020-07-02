class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int xy=0;
        
        int yz=0;
        for(int i=0; i<n; i++){
            int maxcol=0;
            for(int j=0; j<m; j++){
               if(grid[j][i]>maxcol){
                   maxcol=grid[j][i];
               } 
            }
            yz+=maxcol;
            maxcol=0;
        }
        int xz=0;
        for(int i=0; i<m; i++){
            int maxrow=0;
            for(int j=0; j<n; j++){
                if(grid[i][j]>maxrow){
                    maxrow=grid[i][j];
                }
                if(grid[i][j]!=0){
                    xy++;
                }
            }
            xz+=maxrow;
            maxrow=0;
        }
        
        return xy+yz+xz;
    }
};
static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();
