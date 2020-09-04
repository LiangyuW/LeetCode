class Solution {
public:
    string toGoatLatin(string S) {
        
        unordered_set<char>st={'a','e','i','o','u', 'A', 'E', 'I','O','U'};
        string word, out;
        int i=1;
        for(stringstream iss(S); iss>>word; i++){

            if(st.find(word[0])!=st.end()){
                out+=word+"ma"+string(i, 'a')+" ";
            } else{
                out+=word.substr(1)+word[0]+"ma"+string(i, 'a')+" "; 
            }
            
           
        }
        out.pop_back();
        return out;
    }
};
