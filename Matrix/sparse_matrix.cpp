class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>>u;
        vector<vector<int>>v;
        
        vector<vector<int>>out(A.size(), vector<int>(B[0].size(),0));
        for(int i=0; i<A.size(); i++){
            for(int j=0; j<A[0].size(); j++){
                if(A[i][j]) u.push_back({i, j, A[i][j]});
            }
        }
        for(int i=0; i<B.size(); i++){
            for(int j=0; j<B[0].size(); j++){
                if(B[i][j]) v.push_back({i, j, B[i][j]});
            }
        }
        
        for(auto x:u){
            for(auto y:v){
                if(x[1]==y[0]){
                    out[x[0]][y[1]]+=x[2]*y[2];
                }
            }
        }
        
        return out;
    }
};
