class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();
        unordered_map<int, vector<int>> table;
            for(int i = 0; i<m;i++){
                for(int j = 0; j<n; j++){
                        table[i-j].push_back(mat[i][j]);
                }
            }
        
        for(int i = -(n-1); i<m; i++){
            sort(table[i].rbegin(), table[i].rend());
        }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                mat[i][j] = table[i-j].back();
                table[i-j].pop_back();
            }
        }
            
        return mat;
    }
};
