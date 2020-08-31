class Solution {
public:
    vector<vector<int>>dir={{-1,0},{0,1},{1,0},{0,-1}};
    
    bool dfs(vector<vector<int>>& maze, vector<int> cur, vector<int>& destination, vector<vector<bool>>&visited){
       
        if(visited[cur[0]][cur[1]]) return false;
        if(cur==destination)return true;
        
        visited[cur[0]][cur[1]]=true;  
       
        for(const auto &d: dir){
                int x=cur[0]+d[0];
                int y=cur[1]+d[1];
            while(x>=0 && y>=0 && x<maze.size() && y<maze[0].size() && maze[x][y]==0){
                x+=d[0]; y+=d[1];
            }
            if(dfs(maze, {x-d[0], y-d[1]}, destination, visited)){
                return true;
            }
        }
        return false;
    }
    
    
    
    bool hasPath(vector<vector<int>>& maze, vector<int>& start, vector<int>& destination) {
        int m=maze.size();
        int n=maze[0].size();
        vector<vector<bool>>visited(m, vector<bool>(n, false));
       
        return dfs(maze, start, destination, visited);
    }
};
