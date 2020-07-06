class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int prevColor=image[sr][sc];
        int m=image.size();
        int n=image[0].size();
        floodFill(image, m, n, sr, sc, prevColor, newColor);
        return image;
    }
    
    void floodFill(vector<vector<int>> &image, int M, int N, int sr, int sc, int prevColor, int newColor){
        if(sr<0||sr>=M||sc<0||sc>=N) return;
        if(image[sr][sc]!=prevColor) return;
        if(image[sr][sc]==newColor) return;
        
        image[sr][sc]=newColor;
        
        floodFill(image, M, N, sr+1, sc, prevColor, newColor);
        floodFill(image, M, N, sr-1, sc, prevColor, newColor);
        floodFill(image, M, N, sr, sc+1, prevColor, newColor);
        floodFill(image, M, N, sr, sc-1, prevColor, newColor);
    }
    
};
