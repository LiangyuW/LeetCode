class Solution {
public:
    string reorderSpaces(string text) {
        int spaces=0;
        for(auto &e:text){
            if(e==' ') spaces++;
        }
        if(spaces==0) return text;
        
        string out="";
        int wordcount=0;
        vector<string>words;
        istringstream ss(text);
        string word;
        while(ss>>word){
            words.push_back(word);
            wordcount++;
        }
        if(wordcount==1) return words[0]+string(spaces, ' ');
        int k=spaces/(wordcount-1);
        int r=spaces%(wordcount-1);
        int i=0;
        for(i; i<words.size()-1; i++){
            out+=words[i]+string(k, ' ');
        }
        out+=words[i]+string(r, ' ');
        return out;
    }
};
