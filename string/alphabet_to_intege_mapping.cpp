class Solution {
public:
    string freqAlphabets(string s) {
        string out="";
        for(int i=0; i<s.size(); i++){
            if(i<s.size()-2 && s[i+2]=='#'){
                out+=(s[i]-'0')*10+(s[i+1]-'0')+'a'-1;
                i+=2;
            } else{
                out+=(s[i]-'0')+'a'-1;
            }
        }
        return out;
    }
};
