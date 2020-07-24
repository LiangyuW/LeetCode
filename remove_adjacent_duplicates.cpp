class Solution {
public:
    string removeDuplicates(string S) {
        
        string out="";
        for(int i=0; i<S.size(); i++){ 
            if(out.size()!=0){
                char c= out.back();
                if(c!=S[i]){
                    out+=S[i];
                } else {
                    out.pop_back();
                }
            } else{
                out+=S[i];
            }
        }
        
        return out;
    }
};
