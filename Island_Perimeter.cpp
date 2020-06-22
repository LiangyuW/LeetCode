class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int p=0;
        
        for(int i =0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]==1){
                    int p_i=0;
                    if(i==0||grid[i-1][j]==0) p_i++;
                    
                    if(i==grid.size()-1||grid[i+1][j]==0) p_i++;
                    
                    if(j==0||grid[i][j-1]==0) p_i++;
                    
                    if(j==grid[0].size()-1||grid[i][j+1]==0) p_i++;
                    
                   cout <<p_i<<" ";
                    p+=p_i;
                }
                
            }
        }
        return p;
    }
};

static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();
