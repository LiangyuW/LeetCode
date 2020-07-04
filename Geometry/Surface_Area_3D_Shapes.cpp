class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int area=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                    if(grid[i][j]==0) continue; 
                    area+=4*grid[i][j]+2;
                    if(n-1>j) area-=min(grid[i][j], grid[i][j+1]);
                    if(m-1>i) area-=min(grid[i][j], grid[i+1][j]);
                    if(i>0) area-=min(grid[i][j], grid[i-1][j]);
                    if(j>0) area-=min(grid[i][j], grid[i][j-1]);
            }
        }
        return area;
    }
};
