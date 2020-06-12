class Solution {
public:
    
    string tictactoe(vector<vector<int>>& moves) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); 
        
        
        int ttt[3][3]={0};
        for(int i = 0; i<moves.size(); i+=2)
        {
            ttt[moves[i][0]][moves[i][1]]='A';
        }
        for(int i = 1; i<moves.size(); i+=2){
            ttt[moves[i][0]][moves[i][1]]='B';
        }
        
        for(int i =0; i<3; i++){
            if(ttt[i][0]==ttt[i][1]&&ttt[i][0]==ttt[i][2]){
                if(ttt[i][0]=='A')
                    return "A";
                if(ttt[i][0]=='B')
                    return "B";
            }
        }
 
        for(int i =0; i<3; i++){
            if(ttt[0][i]==ttt[1][i]&&ttt[0][i]==ttt[2][i]){
                if(ttt[0][i]=='A')
                    return "A";
                if(ttt[0][i]=='B')
                    return "B";
            }
        }

        if(ttt[0][0]==ttt[1][1]&&ttt[0][0]==ttt[2][2]){
            if(ttt[1][1]=='A')
                return "A";
            if(ttt[1][1]=='B')
                return "B";
        }
        if(ttt[0][2]==ttt[1][1]&&ttt[0][2]==ttt[2][0]){
            if(ttt[1][1]=='A')
                return "A";
            if(ttt[1][1]=='B')
                return "B";
        }      
        
    
        return moves.size()<9 ? "Pending" : "Draw";
    }
};
