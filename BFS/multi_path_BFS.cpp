class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        queue<pair<int, int>>q;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==1){
                    matrix[i][j]=INT_MAX;
                } else{
                    q.push({i, j});
                }
            }
        }
        
        vector<pair<int, int>> dir={{-1,0},{1, 0},{0, -1},{0, 1}};
        
        while(!q.empty()){
            pair<int, int>cell=q.front();
            q.pop();
            
            for(auto e: dir){
                int x=cell.first+e.first;
                int y=cell.second+e.second;
                
                if(x>=0 && x<m && y>=0 && y<n && matrix[x][y]==INT_MAX){
                    matrix[x][y]=matrix[cell.first][cell.second]+1;
                    q.push({x, y});
                }
            }
        }
        
      
        return matrix;
        
    }
};
static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();
