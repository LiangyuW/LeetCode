class Solution {
public:
    
    string solve(string s){
        int c=0;
        string out="";
        for(int i=0; i<s.size(); i++){
            c++;
            if(i== s.size()-1 || s[i]!=s[i+1]){
                out+=(char)(c + '0');
                out+=s[i];
                c=0;
            }
        }
        return out;
    }
    
    string countAndSay(int n) {
        if(n==1) return "1";
        return solve(countAndSay(n-1));
    }
};
