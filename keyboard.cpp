class Solution {
public:
    
    int calculateTime(string keyboard, string word) {
     
        
        vector<int>keys(256);
        
        for(int i=0; i<keyboard.size(); i++){
            keys[keyboard[i]]=i;
        }    
            
        int moves=keys[word[0]];
        int previndex=moves;
 
        for(int i=1; i<word.size(); i++){
            int index=keys[word[i]];
            moves+=abs(index-previndex);
            previndex=index;
        }
        return moves;
        
    }
};
