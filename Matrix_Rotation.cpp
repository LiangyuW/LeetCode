class Solution {
public:
    
    /*
        the 4 corners to rotate are (x,y), (N-y-1,x), (N-x-1, N-y-1), (y, N-x-1)
    */
    
    void rotate(vector<vector<int>>& matrix) {
        int N=matrix.size();
        for(int x=0; x<N/2; x++){
            for(int y=x; y<N-x-1; y++){
                int tmp=matrix[x][y];
                matrix[x][y]=matrix[N-y-1][x];
                matrix[N-y-1][x]=matrix[N-x-1][N-y-1];
                matrix[N-x-1][N-y-1]=matrix[y][N-x-1];
                matrix[y][N-x-1]=tmp;
            }
        }
    }
};
