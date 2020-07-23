class Solution {
public:
    
    void dfs(vector<vector<char>>& grid,  vector<vector<bool>> &visited, int i, int j){
        if(i<0||i==grid.size()||j<0||j==grid[0].size())return;
        if(grid[i][j]=='0'||visited[i][j]==true) return;
        visited[i][j]=true;
        dfs(grid, visited, i-1, j);
        dfs(grid, visited, i+1, j);
        dfs(grid, visited, i, j+1);
        dfs(grid, visited, i, j-1);
        return;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int islands=0;
        int m=grid.size();
        if(m==0) return 0;
        
        int n=grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
                                     
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='1'&&visited[i][j]==false){
                    dfs(grid, visited, i, j);
                    islands++;
                }
            }
        }
        return islands;
        
    }
};
